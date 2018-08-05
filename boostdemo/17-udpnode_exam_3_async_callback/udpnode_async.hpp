#pragma once
#include <boost/asio.hpp>
#include <boost/circular_buffer.hpp> 
#include <boost/smart_ptr.hpp>
#include <boost/array.hpp>
#include <numeric>
#include <string>
#include <iostream>

typedef void(*recvCallback) (const boost::system::error_code& error,
            std::size_t bytes_transferred/*bytes_transferred*/,
            boost::shared_ptr< boost::array<char , 1024 >> str);

typedef void(*sendCallback) (boost::shared_ptr<std::string> message,
            const boost::system::error_code& error,
                std::size_t bytes_transferred/*bytes_transferred*/);


class udpnode_async
{
    private:
        udpnode_async(const udpnode_async& rhs);
        udpnode_async& operator=(const udpnode_async& rhs);
        
        void start_receive();
           
        
        recvCallback m_recvfuncallback;
        sendCallback m_sendCallback;       
        boost::asio::ip::udp::socket socket_;
       

    
    public:

        boost::asio::ip::udp::endpoint remote_endpoint;
        //boost::shared_ptr< std::vector<char> > str ( new std::vector<char>(100,0) );//建立接收数据的缓冲区
        udpnode_async(boost::asio::io_service &io,
                    boost::asio::ip::udp::endpoint &local_endpoint,
                    recvCallback recvcall,
                    sendCallback sendcall
                    );
            
    
        ~udpnode_async();
    

    
    void sendRequest(boost::asio::ip::udp::endpoint &ep,
        const std::string& request);
    


};

