

#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>

#include <sstream> 

#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/assign/list_of.hpp> //for ref_list_of  
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/progress.hpp>
#include <boost/program_options.hpp>



#include "bmsSensorMode.hpp"

#define  DEBUG_ECHO 1

class MAsyncSerialImpl
{
public:
    CallbackAsyncSerial serial;
    std::string receivedData;
};


bmsSensorrMode::bmsSensorrMode(std::string& port, unsigned int rate)
:pimpl(new MAsyncSerialImpl)
{
 
	open(port,rate);	
	ttyport = port;
	bandrate = rate;
	bmssensor.Set_add(1);
	onlineMsg.online=0;
	onlineMsg.Set_timeout(5);	
	
}

bmsSensorrMode::~bmsSensorrMode()
{
  
    pimpl->serial.clearCallback();
    try {
        pimpl->serial.close();
    } catch(...)
    {
        //Don't throw from a destructor
    }
}
int bmsSensorrMode::open(std::string devname, unsigned int baudrate)
{
    try {
        pimpl->serial.open(devname,baudrate);
    } catch(boost::system::system_error&)
    {
        //Errors during open
        return 0;
    }
    pimpl->serial.setCallback(bind(&bmsSensorrMode::readCallback,this, _1, _2));
	return 1;
}

void bmsSensorrMode::close()
{
    pimpl->serial.clearCallback();
    try {
        pimpl->serial.close();
    } catch(boost::system::system_error&)
    {
        //Errors during port close
    }
    pimpl->receivedData.clear();//Clear eventual data remaining in read buffer
}

bool bmsSensorrMode::isOpen()
{
    return pimpl->serial.isOpen();
}

bool bmsSensorrMode::errorStatus()
{
    return pimpl->serial.errorStatus();
}

void bmsSensorrMode::write(std::string data)
{
    pimpl->serial.writeString(data);
}

void bmsSensorrMode::readCallback(const char *data, size_t size)
{
    //pimpl->receivedData+=QString::fromAscii(data,size);
        std::string res;
        res.clear();
        res.assign(data,size);
        pimpl->receivedData+=res;
	//const char* ch=pimpl->receivedData.c_str();
	#if 0
	print_hex(pimpl->receivedData);
	#endif
	/*
	comRecvFlag = procss_recv_buffer();
	if(comRecvFlag){
		onlineMsg.Set_connect();
		
		}
		*/

}

void bmsSensorrMode::bmsSensorrMode_master()
{
	
       std::cout<< "hello bmsSensorrMode_master "<<std::endl;
			
			
         try{
		   
                    while(1){
			
			DevCmd_GetBmsInfo();
			onlineMsg.check_connect();

			
			boost::this_thread::sleep(boost::posix_time::milliseconds(200));
			
                     }
             }
        catch(boost::thread_interrupted&){
                 std::cout << "thread interrupt" << std:: endl;
             }
    
	
}


void bmsSensorrMode::print_dec(unsigned char *datBUF,int Num)
{

 std::cout<< "print_dec:";
 for(std::size_t index=0;index<Num;index++){
                  int x=(unsigned  char)datBUF[index];
                   std::cout<<boost::format("%d ")%x;
              }
std::cout<<"\n";

}
 void bmsSensorrMode::print_hex(unsigned char *datBUF,int Num)
 {

  std::cout<< "print_hex:";
  for(std::size_t index=0;index<Num;index++){
                   int x=(unsigned  char)datBUF[index];
                    std::cout<<boost::format("%02X ")%x;
               }
 std::cout<<"\n";

 }
  void bmsSensorrMode::print_hex(std::string str)
 {
	int Num = str.size();
	const char * datBUF =  str.c_str();
	
  std::cout<< "bmsSensorrMode print_recv hex:";
  for(std::size_t index=0;index<Num;index++){
                   int x=(unsigned  char)datBUF[index];
                    std::cout<<boost::format("%02X ")%x;
               }
 std::cout<<"\n";

 }

int bmsSensorrMode::DriverecvDelay(  
 	int size,    
 	int timeout,    
 	std::string errprint){       
 	int count=0;    
	while(pimpl->receivedData.size()<size){          
		count++;          
		boost::this_thread::sleep(boost::posix_time::milliseconds(1));         
		if(count>timeout){                        
			#if 1                      
			std::cout<<errprint<<":"<<pimpl->receivedData.size()<<'\a'<<std::endl;	
			print_hex(pimpl->receivedData);
			#endif                         // printf("\a");                          
			count=0;                         
			return pimpl->receivedData.size();                       
			}            
		}        
	return pimpl->receivedData.size();
}

void bmsSensorrMode::DevCmd_GetBmsInfo(){

    //����
        static int recv_timeout=0;
	pimpl->receivedData.clear();
        write(bmssensor.Cmd_GetInfo());
	boost::this_thread::sleep(boost::posix_time::milliseconds(100));	
	
	std::string errprint = ttyport+" DevCmd_GetBmsInfo recv  error";  
	int recvsize=DriverecvDelay(bmsSensor::RDATA_LENGTH,RECV_WAITE_TIME,errprint);
       if(recvsize>=bmsSensor::RDATA_LENGTH){
			
			//print_hex(pimpl->receivedData);
			if(bmssensor.infocheck(pimpl->receivedData)==1){
				//�洢����	
				bmssensor.recordInfo(pimpl->receivedData);
				onlineMsg.Set_connect();
				}
			else{
				 recv_timeout++;
				 if(recv_timeout>=RECV_NO_COUNTER){
	                			onlineMsg.online=0;
						recv_timeout=0;
						//print_test( vecpa[0]);
			 	}				
				}
			
                 }
       else{
			 recv_timeout++;
			 if(recv_timeout>=RECV_NO_COUNTER){
                			onlineMsg.online=0;
					recv_timeout=0;
					//print_test( vecpa[0]);
		 	}
               }
}

