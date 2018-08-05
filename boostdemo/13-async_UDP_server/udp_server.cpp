#include "udp_server.hpp"

#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/format.hpp>

#include <boost/smart_ptr.hpp>


#include <iostream>
#include <memory>
#include <string>


udp_server::udp_server(boost::asio::io_service &io)
    :socket_(io,boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 9999))

{
    start_receive();
}

udp_server::~udp_server()
{
}


void udp_server::start_receive()
{
      socket_.async_receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 
        boost::bind(&udp_server::handle_receive, this,
        boost::asio::placeholders::error,
      boost::asio::placeholders::bytes_transferred)
      );
}

void udp_server::handle_receive(const boost::system::error_code& error,
        std::size_t bytes_transferred/*bytes_transferred*/)
{
    std::cout<<"remote_endpoint="<<remote_endpoint.address().to_string()<<","
     << remote_endpoint.port()<<":";
    


    //boost::format fmt("%1%:%2%");
    //fmt %recv_buf.data();
   // fmt %bytes_transferred;
   // std::cout << fmt<< std::endl;
    //recv_buf.clear();

    if (!error || error == boost::asio::error::message_size){
        recv_buf[bytes_transferred]='\0';
        std::string res;
        res.clear();
        res.assign(recv_buf.begin(),recv_buf.begin()+bytes_transferred);
        std::cout << res<<std::endl;

        boost::shared_ptr<std::string> message(new std::string("i recv some data!"));
        
        socket_.async_send_to(boost::asio::buffer(*message), remote_endpoint,
        boost::bind(&udp_server::handle_send, this, message,
        boost::asio::placeholders::error,
        boost::asio::placeholders::bytes_transferred)
        );
        }

     start_receive();
}


void udp_server::handle_send(boost::shared_ptr<std::string> /*message*/,
    const boost::system::error_code& /*error*/,
    std::size_t bytes_transferred/*bytes_transferred*/)
{
}

