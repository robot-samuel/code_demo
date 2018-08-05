#pragma once

#include <boost/asio.hpp>

class udp_client
{
private:
    udp_client(const udp_client& rhs);
    udp_client& operator=(const udp_client& rhs);

    void start_receive();
void handle_receive(const boost::system::error_code& error,
        std::size_t bytes_transferred/*bytes_transferred*/);

 void handle_send();

     boost::asio::ip::udp::socket socket_;
     boost::asio::ip::udp::endpoint remote_endpoint;
     boost::asio::ip::udp::endpoint target_endpoint_;
     boost::array<char, 1024> recv_buf;
    // boost::shared_ptr<std::string> sendMsgPtr;
     boost::asio::deadline_timer t;
    // boost::asio::io_service service_;
     
public:
    udp_client(boost::asio::io_service &io,boost::asio::ip::udp::endpoint &target_endpoint);
    ~udp_client();

};

