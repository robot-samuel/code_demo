#pragma once
#include <boost/asio.hpp>
#include <boost/circular_buffer.hpp> 
#include <boost/smart_ptr.hpp>
#include <boost/array.hpp>
#include <numeric>
#include <string>
#include <iostream>

class udpnode_sync
{
private:
    udpnode_sync(const udpnode_sync& rhs);
    udpnode_sync& operator=(const udpnode_sync& rhs);
    
    std::size_t sendRequest(
        const boost::asio::ip::udp::endpoint& ep,
        const std::string& request);

    std::string receiveResponse();
    
    
    boost::asio::ip::udp::socket m_socket_;
   
    
public:
    udpnode_sync(
        boost::asio::io_service &io,
        boost::asio::ip::udp::endpoint &localep);

    ~udpnode_sync();

std::string ComputationOp(
    std::string &request,
    boost::asio::ip::udp::endpoint &targetep);


};

