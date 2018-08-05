#pragma once

#include <boost/asio.hpp>

class udp_server
{
private:
    udp_server(const udp_server& rhs);
    udp_server& operator=(const udp_server& rhs);
    
        void start_receive();
    void handle_receive(const boost::system::error_code& error,
            std::size_t bytes_transferred/*bytes_transferred*/);
    
     void handle_send(boost::shared_ptr<std::string> /*message*/,
             const boost::system::error_code& /*error*/,
             std::size_t bytes_transferred/*bytes_transferred*/);
     

    boost::asio::ip::udp::socket socket_;
    boost::asio::ip::udp::endpoint remote_endpoint;
    boost::array<char, 1024> recv_buf;
    

public:
    udp_server(boost::asio::io_service &io);
    ~udp_server();

};

