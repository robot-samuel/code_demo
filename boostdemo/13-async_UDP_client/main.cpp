#include "udp_client.hpp"


#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>


#include <iostream>
#include <memory>
#include <string>


int main(int argc, char **argv)
{
    try{
            boost::asio::io_service io;
            
            //target info
            boost::asio::ip::address addr = boost::asio::ip::address::from_string("192.168.1.7");
            boost::asio::ip::udp::endpoint receiver_endpoint(addr, 7777);
            
            udp_client client(io,receiver_endpoint);
            io.run();
            
        }
    catch(std::exception& e){
        
            std::cerr << e.what() << std::endl;
        }
	return 0;
}
