
//boost aiso server
//g++ main.cpp -o aiso_server -boost_system -lpthread
//下面是一个模式的简单的udp 服务器

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

//using boost::asio::ip::udp;
//using  boost::system::error_code;



int main(int argc,char * argv[]){

    //使用asio至少需要一个boost::asio::io_service对象.该类提供了访问I/O的功能.
    boost::asio::io_service service;
    //I/O objects 用来初始化某些特定操作

   // boost::asio::ip::address addr = boost::asio::ip::address::from_string("127.0.0.1");
    //boost::asio::ip::udp::endpoint receiver_endpoint(addr, 10060);
    //ip:127.0.0.1
    //port:9999
   boost::asio::ip::udp::socket socket(service, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 9999));
    
    
    bool is_stop=false;
    
    while(!is_stop){
        boost::array<char, 1024> recv_buf;
        boost::asio::ip::udp::endpoint remote_endpoint;
        boost::system::error_code error;
        
        // 接收一个字符，这样就得到了远程端点(remote_endpoint)
        socket.receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 0, error);

        if (error && error != boost::asio::error::message_size)
            throw boost::system::system_error(error);

        std::cout<<"remote_endpoint="<<remote_endpoint.address().to_string()<<","
         << remote_endpoint.port()<<":";

        std::cout << recv_buf.data() << std::endl;

    }
    return 0;
}

