
//boost aiso server
//g++ main.cpp -o aiso_server -boost_system -lpthread
//������һ��ģʽ�ļ򵥵�udp ������

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

//using boost::asio::ip::udp;
//using  boost::system::error_code;



int main(int argc,char * argv[]){

    //ʹ��asio������Ҫһ��boost::asio::io_service����.�����ṩ�˷���I/O�Ĺ���.
    boost::asio::io_service service;
    //I/O objects ������ʼ��ĳЩ�ض�����

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
        
        // ����һ���ַ��������͵õ���Զ�̶˵�(remote_endpoint)
        socket.receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 0, error);

        if (error && error != boost::asio::error::message_size)
            throw boost::system::system_error(error);

        std::cout<<"remote_endpoint="<<remote_endpoint.address().to_string()<<","
         << remote_endpoint.port()<<":";

        std::cout << recv_buf.data() << std::endl;

    }
    return 0;
}

