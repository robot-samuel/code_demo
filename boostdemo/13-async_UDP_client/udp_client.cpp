#include "udp_client.hpp"

#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/format.hpp>

#include <boost/smart_ptr.hpp>


#include <iostream>
#include <memory>
#include <string>



udp_client::udp_client(boost::asio::io_service 
&io,boost::asio::ip::udp::endpoint &target_endpoint)
    : t(io, boost::posix_time::seconds(1)),
    socket_(io,boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(),9999)),
    target_endpoint_(target_endpoint)
{
    
   t.async_wait(boost::bind(&udp_client::handle_send, this));
   std::cout << "async_wait..............\n";
   start_receive();
}

udp_client::~udp_client()
{
}

void udp_client::start_receive()
{
      socket_.async_receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 
        boost::bind(&udp_client::handle_receive, this,
        boost::asio::placeholders::error,
      boost::asio::placeholders::bytes_transferred)
      );
}


void udp_client::handle_receive(const boost::system::error_code& error,
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

        }

     start_receive();
}


void udp_client::handle_send()
{
    
       socket_.send_to(boost::asio::buffer("hello boost udo world"), target_endpoint_); 
        t.expires_at(t.expires_at() + boost::posix_time::seconds(1));
         t.async_wait(boost::bind(&udp_client::handle_send, this));
        
}


