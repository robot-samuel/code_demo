
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




int main(int argc,char * argv[]){

    //define IO service 
    boost::asio::io_service service;
    boost::system::error_code error;  

    //target info
    boost::asio::ip::address addr = boost::asio::ip::address::from_string("192.168.1.7");
    boost::asio::ip::udp::endpoint receiver_endpoint(addr, 7777);
    
    //local nfo
    boost::asio::ip::udp::socket socket(service, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), 5555));

    bool is_stop=false;
     //while(!is_stop){ 
         socket.send_to(boost::asio::buffer("hello boost udo world"), receiver_endpoint); 
       // }

    return 0;
}
