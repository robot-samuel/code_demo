
//boost aiso client
//g++ main.cpp -o aiso_client -boost_system -lpthread

#include <iostream>  
#include <sstream> 
#include <string> 
#include <boost/timer.hpp>
#include <boost/progress.hpp>
#include <boost/thread/mutex.hpp> 
#include <boost/thread/thread.hpp>
#include <boost/format.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/asio.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/lexical_cast.hpp>  
#include <boost/array.hpp>
#include <boost/bind.hpp>

using namespace std; // For time_t, time and ctime;  
using namespace boost;
using namespace boost::asio;
using  boost::system::error_code;
using  ip::tcp;

typedef unsigned int size_t;


int main(int argc,char * argv[]){

    //define IO service 
    boost::asio::io_service service;
    boost::system::error_code error;  
     
    //boost::asio::ip::tcp::acceptor acceptor(service,boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),9998));
    boost::asio::ip::tcp::socket sock(service);
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address_v4::from_string("192.168.1.7"), 9998);  
    sock.connect(endpoint, error); 
    // 这里要判断一下, 否则没有连上会通过.  
    if (error)  
        throw boost::system::system_error(error); 
    
    std::cout<<"local_endpoint="<<sock.local_endpoint().address().to_string()<<","
      << sock.local_endpoint().port()<<std::endl;
    
    std::cout<<"remote_endpoint="<<sock.remote_endpoint().address().to_string()<<","
     << sock.remote_endpoint().port()<<std::endl;
    
    bool is_stop=false;
     while(!is_stop){ 
          
          std::vector<char> buf(128); 
         
          size_t len = sock.read_some(boost::asio::buffer(buf), error);  
             // 这是也要判断一下, 否则服务端运行断开, 这里会出现死循环.  
           if (error == boost::asio::error::eof)  
                    break; // Connection closed cleanly by peer.  
           else if (error)  
                    throw boost::system::system_error(error); // Some other error
           //  std::vector<char> 2 string     
           std::string res;
           res.clear();
           res.assign(buf.begin(),buf.end());
           std::cout << res<<std::endl;

           // buf要注意控制大小。
           len = sizeof("hello boost aiso world");
            sock.write_some(boost::asio::buffer("hello boost aiso world",len), error);  
            }  

    return 0;
}
