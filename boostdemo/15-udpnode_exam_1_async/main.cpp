
#include "udpnode_async.hpp"


#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/format.hpp>



void can1_master(boost::shared_ptr<udpnode_async> pa){
    
    std::cout<< "hello can1_master "<<std::endl;
    
   // boost::asio::ip::address addr = boost::asio::ip::address::from_string("192.168.1.7");
  //  boost::asio::ip::udp::endpoint target_can1(addr, 5000);

     try{
         while(1){
             // boost::this_thread::interruption_point();    
             if(pa->isresvdate()){
                    std::string recvd=pa->copyrecvbufer();

                   std::cout<< "can1_master recv:";
                    for(std::size_t index=0;index<recvd.size();index++){
                            int x=(unsigned  char)recvd[index];
                             std::cout<<boost::format("%02X ")%x;
                            /*
                           int x =(unsigned char)recvd[index];
                            std::cout<<x<<":"<<recvd[index]<<":"<<
                                (unsigned int)(unsigned char)recvd[index]<<":"<<std::hex<<x;
                                */
                        }
                     std::cout<<"\n";
                     
                   // std::cout<< "can1_master recv:"<< recvd<<std::endl;
                   pa->sendRequest( pa->remote_endpoint,recvd);
                }
             //boost::this_thread::sleep(boost::posix_time::seconds(1)); 
             boost::this_thread::sleep(boost::posix_time::milliseconds(1));   
             //(boost::posix_time::milliseconds( msec )
             }
         }
    catch(boost::thread_interrupted&){
             std::cout << "thread interrupt" << std:: endl;
         }


}

void can2_master(boost::shared_ptr<udpnode_async> pa){
    
    std::cout<< "hello can2_master "<<std::endl;
    
  //boost::asio::ip::address addr = boost::asio::ip::address::from_string("192.168.1.7");
   // boost::asio::ip::udp::endpoint target_can2(addr, 5100);


    try{
        while(1){
              if(pa->isresvdate()){
                std::string recvd=pa->copyrecvbufer();
                //print data as hex
                std::cout<< "can1_master recv:";
                 for(std::size_t index=0;index<recvd.size();index++){
                         int x=(unsigned  char)recvd[index];
                          std::cout<<boost::format("%02X ")%x;
                         /*
                        int x =(unsigned char)recvd[index];
                         std::cout<<x<<":"<<recvd[index]<<":"<<
                             (unsigned int)(unsigned char)recvd[index]<<":"<<std::hex<<x;
                             */
                     }
                  std::cout<<"\n";
                
                //std::cout<< "can2_master recv:"<< recvd<<std::endl;
                //send to the asker
                pa->sendRequest(pa->remote_endpoint,recvd);
                }
            // boost::this_thread::interruption_point();    
            //boost::this_thread::sleep(boost::posix_time::seconds(1));  
             boost::this_thread::sleep(boost::posix_time::milliseconds(1));   
            }
        }
   catch(boost::thread_interrupted&){
            std::cout << "thread interrupt" << std:: endl;
        }
}


int main(int argc, char **argv)
{
    try{
        boost::asio::io_service service;
        
        //鏈湴绔彛淇℃伅
        boost::asio::ip::udp::endpoint local_can1(boost::asio::ip::udp::v4(), 9998);
        
        //初始化，同时开启异步接收
        boost::shared_ptr< boost::circular_buffer<unsigned char> >  pcbbuffer(new 
        boost::circular_buffer<unsigned char> 
        (1024));
        boost::shared_ptr<udpnode_async> Ocnet200_can1(new udpnode_async(service,local_can1,pcbbuffer));
        
        //鏈湴绔彛淇℃伅
          boost::asio::ip::udp::endpoint local_can2(boost::asio::ip::udp::v4(), 9997);
        //初始化，同时开启异步接收

        boost::shared_ptr< boost::circular_buffer<unsigned char> >  pcbcan2buffer( new 
        boost::circular_buffer<unsigned char> 
        (1024));
        boost::shared_ptr<udpnode_async> Ocnet200_can2(new udpnode_async(service,local_can2,pcbcan2buffer));
        

  
        boost::thread thea_can1(  boost::bind( can1_master,Ocnet200_can1));
        boost::thread thea_can2( boost::bind( can2_master,Ocnet200_can2));
        
        //异步阻塞
        service.run();
        thea_can1.join();
        thea_can2.join();
               //return 0;
        }
    catch(std::exception& e){
        
            std::cerr << e.what() << std::endl;
        }

    return 0;
}

