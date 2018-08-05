#include "udpnode_sync.hpp"
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/assign/list_of.hpp> //for ref_list_of  
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

udpnode_sync::udpnode_sync(
    boost::asio::io_service &io,
    boost::asio::ip::udp::endpoint &localep)
:m_socket_(io,localep)
{
    
}

udpnode_sync::~udpnode_sync()
{
}

std::string udpnode_sync::ComputationOp(
    std::string &request,
    boost::asio::ip::udp::endpoint &targetep){

    sendRequest(targetep,request);
    return receiveResponse();


}

std::size_t udpnode_sync::sendRequest(
    const boost::asio::ip::udp::endpoint& ep,
    const std::string& request){
    
    std::size_t size=0;
    boost::system::error_code ec;
    size = m_socket_.send_to(asio::buffer(request), ep);
    return size;

}

   
std::string udpnode_sync::receiveResponse( ){

    boost::array<char,1024>recvbuf;
    boost::system::error_code ec;
     boost::asio::ip::udp::endpoint remote_ep;
      std::size_t bytes_recieved =
            m_socket_.receive_from(asio::buffer(recvbuf), remote_ep,0, ec);
      
        if (ec && ec != boost::asio::error::message_size)
            throw boost::system::system_error(ec);

        std::cout<<"remote_endpoint="<<
            remote_ep.address().to_string()<<","<< 
            remote_ep.port()<<":";

        std::cout << recvbuf.data() << std::endl; 
        
    return std::string(recvbuf.begin(), bytes_recieved);
    
}


