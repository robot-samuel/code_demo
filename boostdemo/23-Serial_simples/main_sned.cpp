
#include "SimpleSerial.hpp"
#include <string>
#include <algorithm>
#include <iostream>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread.hpp>

#include <boost/date_time/posix_time/posix_time.hpp>



using namespace std;

int main(int argc, char **argv)
{
try {
        std::string   COM1="/dev/ttyUSB0";
	SimpleSerial serial(COM1,115200);
        while(1)
            {
                std::string   str="hello boost::asio::serial\r\n";
                serial.writeString( str);
                std::cout<<COM1<<"sned:"<<str;
                
                boost::this_thread::sleep(boost::posix_time::milliseconds(1000));
            }
       
         // std::string restr = serial.readLine();
        // std::cout<<COM1<<"recv :"<<restr<<std::endl;
         
        } catch(boost::system::system_error& e)
        {
            std::cout<<"Error: "<<e.what()<<std::endl;
            return 0;
        }

}
