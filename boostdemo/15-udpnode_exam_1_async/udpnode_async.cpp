#include "udpnode_async.hpp"

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/assign/list_of.hpp> //for ref_list_of  
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>


//using namespace boost::assign;  

udpnode_async::udpnode_async(boost::asio::io_service &io,
boost::asio::ip::udp::endpoint &local_endpoint,
boost::shared_ptr< boost::circular_buffer<unsigned char> > mpcb)
    :socket_(io,local_endpoint),
    ppcb(mpcb)
{ 
  
    start_receive();
   
}
udpnode_async::udpnode_async(boost::asio::io_service &io,
boost::asio::ip::udp::endpoint &local_endpoint)
    :socket_(io,local_endpoint)
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
    
      socket_.async_receive_from(boost::asio::buffer(recv_buf),remote_endpoint, 
        boost::bind(&udpnode_async::recv_master, this,
        boost::asio::placeholders::error,
      boost::asio::placeholders::bytes_transferred)
      );
}

void udpnode_async::sendRequest(boost::asio::ip::udp::endpoint &ep,
    const std::string &request){

    boost::shared_ptr< std::string > pstr(new std::string (request));
        
        socket_.async_send_to(boost::asio::buffer(*pstr),ep, 
          boost::bind(&udpnode_async::trans_master, this,pstr,
          boost::asio::placeholders::error,
        boost::asio::placeholders::bytes_transferred)
        );
}


void udpnode_async::trans_master(
    boost::shared_ptr<std::string> message,
    const boost::system::error_code& error,
        std::size_t bytes_transferred/*bytes_transferred*/){


}

void udpnode_async::recv_master(const boost::system::error_code& error,
        std::size_t bytes_transferred/*bytes_transferred*/){
       
        std::cout<<"remote_endpoint="<<remote_endpoint.address().to_string()<<","
     << remote_endpoint.port()<<":";
     
   
        if (!error || error == boost::asio::error::message_size){
            /*
         for(std::size_t index=0;index<bytes_transferred;index++){
                            //recv_buf[index]
                            int x = recv_buf[index];
                           std::cout<<boost::format("%d:[%02X] ")%index %x <<std::endl; 
                            //std::cout<<std::hex<<recv_buf[index]<<" ";
                        }
                        */
         
        recv_buf[bytes_transferred]='\0';
            /*
        std::string res;
        res.clear();
        res.assign(recv_buf.begin(),recv_buf.begin()+bytes_transferred);
        std::cout << res<<std::endl;
        */
        
        for(unsigned int index=0;index<bytes_transferred;index++){
             //向后压入队列
                this->ppcb->push_back(recv_buf[index]);
            }
        std::cout<<std::endl;
        
        }
        
    start_receive();
}

std::string udpnode_async::copyrecvbufer(){
    
    std::string res;
    if(! this->ppcb->empty()){
        
             boost::array<unsigned char, 1024> buf;
            unsigned char *pch =  this->ppcb->linearize();
            int size =   this->ppcb->size();
           //  std::cout << size<<std::endl;
            for(int index=0;index<size;index++){
                    buf[index]=pch[index];
                   // std::cout << pch[index]<<std::endl;
                    this->ppcb->pop_front();
                }
            
            res.clear();
            res.assign(buf.begin(),buf.begin()+size);
            //bytes_buf = 0;
           // std::cout << res<<std::endl;
        }
    
        return res;

}

int  udpnode_async::isresvdate(){
    
        return  this->ppcb->size();
}


