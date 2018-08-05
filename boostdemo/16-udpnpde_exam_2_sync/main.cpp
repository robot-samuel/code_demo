
#include "udpnode_sync.hpp"

#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/format.hpp>


int main(int argc, char **argv)
{
    try{
        boost::asio::io_service service;
        
        //本地端口信息
        boost::asio::ip::udp::endpoint local(boost::asio::ip::udp::v4(), 9998);
        udpnode_sync udpnode(service,local);

        boost::asio::ip::address addr= 
        boost::asio::ip::address::from_string("192.168.1.100");
        boost::asio::ip::udp::endpoint Tendpoint(addr, 10001);

        std::string request( "hello udp node");
        std::string response=
        udpnode.ComputationOp(request,Tendpoint);

        std::cout << "Response from the server #1 received: "
             << response << std::endl;

        }
    catch(std::exception& e){
        
            std::cerr << e.what() << std::endl;
        }

    return 0;

}
