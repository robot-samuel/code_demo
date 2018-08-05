#pragma once

#include <boost/asio.hpp>
#include <boost/circular_buffer.hpp> 
#include <boost/smart_ptr.hpp>
#include <boost/array.hpp>
#include <numeric>
#include <string>
#include <iostream>




class Cnet200
{
private:
    Cnet200(const Cnet200& rhs);
    Cnet200& operator=(const Cnet200& rhs);
    
    void start_receive();
    
    void trans_master(
        boost::shared_ptr<std::string> message,
        const boost::system::error_code& error,
            std::size_t bytes_transferred/*bytes_transferred*/);

    
 void recv_master(const boost::system::error_code& error,
        std::size_t bytes_transferred/*bytes_transferred*/);

    boost::asio::ip::udp::socket socket_;
    boost::array<unsigned char, 1024> recv_buf;
    
    boost::shared_ptr< boost::circular_buffer<unsigned char> >  ppcb;
    
public:
    
    boost::asio::ip::udp::endpoint remote_endpoint;
    
    Cnet200(boost::asio::io_service &io,
            boost::asio::ip::udp::endpoint &local_endpoint);
    
    Cnet200(boost::asio::io_service &io,
boost::asio::ip::udp::endpoint &local_endpoint,
boost::shared_ptr< boost::circular_buffer<unsigned char> > mpcb);
    ~Cnet200();
    
 
    
    std::string copyrecvbufer();
    int  trans_masterisresvdate();
    int  isresvdate();

void sendRequest(boost::asio::ip::udp::endpoint &ep,
    const std::string& request);

};

