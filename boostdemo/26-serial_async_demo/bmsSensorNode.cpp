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

#include <boost/date_time/posix_time/posix_time.hpp>


#include "AsyncSerial.h"
#include "bmsSensorMode.hpp"
#include "zmqclient.h"



int main(int argc, char **argv)
{

	
	std::string   COM1="/dev/ttyUSB0";
		 //int badrate=115200;
		
//������ӡ
	std::cout<<"argc= "<<argc<<std::endl;
	for(int index=0;index<argc;index++){
			std::cout<<"argv"<<"["<<index<<"]= "<<argv[index]<<std::endl;
		}
	std::string argv_com=argv[1];
	std::string argv_bandrate=argv[2];
	
	std::string   COM=argv_com;
	
	int badrate=9600;
	try{  
		    badrate=boost::lexical_cast<int>(argv_bandrate); // ���ַ���ת��Ϊ����  
		}  
	catch(boost::bad_lexical_cast&)    // ת��ʧ�ܻ��׳�һ���쳣  
		{  
		        badrate=9600;
		} 

	
	
	bmsSensorrMode BmsSensor(COM,badrate);

        boost::thread t1(boost::bind(&bmsSensorrMode::bmsSensorrMode_master,&BmsSensor));  
		   
       t1.join();

        return 0;


}




