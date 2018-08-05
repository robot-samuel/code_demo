
//boost aiso server
//g++ main.cpp -o aiso_server -boost_system -lpthread
//下面是一个模式的简单的Tcp echo服务器

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

using namespace boost::asio;
using  boost::system::error_code;
using  ip::tcp;


int main(int argc,char * argv[]){

    //使用asio至少需要一个boost::asio::io_service对象.该类提供了访问I/O的功能.
    boost::asio::io_service service;
    //I/O objects 用来初始化某些特定操作
    //boost::asio::ip::tcp::socket
    // boost::asio::ip::tcp::acceptor
    //封装服务器端口
    boost::asio::ip::tcp::acceptor acceptor(service,boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),9999));
    
    bool is_stop=false;
    
    while(!is_stop){
       //定义TCPsocket对象，析构上一轮的连接(即断开上一个连接)
      boost::asio::ip::tcp::socket sock(service);
      //阻塞等待连接
      acceptor.accept(sock);
      //答应客户单地址
      std::cout<<sock.remote_endpoint().address()<< ":"
                    <<sock.remote_endpoint().port()<<std::endl;
      //错误返回对象
      boost::system::error_code errcode;
      //发送回应数据
      sock.write_some(boost::asio::buffer("hello boost aiso world"),errcode);
      if(errcode){
          std::cout<<boost::system::system_error(errcode).what()<<std::endl;
          break;
      }
    }
    return 0;
}

