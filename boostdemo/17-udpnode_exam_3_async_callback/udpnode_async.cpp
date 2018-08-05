#include "udpnode_async.hpp"
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/assign/list_of.hpp> //for ref_list_of  
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>

//using namespace boost::assign;  


udpnode_async::udpnode_async(
    boost::asio::io_service &io,
    boost::asio::ip::udp::endpoint &local_endpoint,
    recvCallback recvcall,
    sendCallback sendcall)
    :socket_(io,local_endpoint),
     m_recvfuncallback(recvcall),
     m_sendCallback(sendcall)
{ 
  
    start_receive();
   
}


udpnode_async::~udpnode_async()
{
    socket_.close();
   // delete  this->pcb;
}

void udpnode_async::start_receive()
{
    /*
      socket_.async_receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 
        boost::bind(&udpnode_async::m_recvfuncallback, this,
        boost::asio::placeholders::error,
        boost::asio::placeholders::bytes_transferred)
      );
      */
      
       socket_.async_receive_from(boost::asio::buffer(*str),remote_endpoint, 
        boost::bind(&udpnode_async::m_recvfuncallback, this,
        boost::asio::placeholders::error,str)
      );
}

void udpnode_async::sendRequest(boost::asio::ip::udp::endpoint &ep,
    const std::string &request){

    boost::shared_ptr< std::string > pstr(new std::string (request));
        
        socket_.async_send_to(boost::asio::buffer(*pstr),ep, 
          boost::bind(&udpnode_async::m_sendCallback, this,pstr,
          boost::asio::placeholders::error,
        boost::asio::placeholders::bytes_transferred)
        );
}




