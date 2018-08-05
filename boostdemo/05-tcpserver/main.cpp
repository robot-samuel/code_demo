
//boost aiso server
//g++ main.cpp -o aiso_server -boost_system -lpthread
//������һ��ģʽ�ļ򵥵�Tcp echo������

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

    //ʹ��asio������Ҫһ��boost::asio::io_service����.�����ṩ�˷���I/O�Ĺ���.
    boost::asio::io_service service;
    //I/O objects ������ʼ��ĳЩ�ض�����
    //boost::asio::ip::tcp::socket
    // boost::asio::ip::tcp::acceptor
    //��װ�������˿�
    boost::asio::ip::tcp::acceptor acceptor(service,boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(),9999));
    
    bool is_stop=false;
    
    while(!is_stop){
       //����TCPsocket����������һ�ֵ�����(���Ͽ���һ������)
      boost::asio::ip::tcp::socket sock(service);
      //�����ȴ�����
      acceptor.accept(sock);
      //��Ӧ�ͻ�����ַ
      std::cout<<sock.remote_endpoint().address()<< ":"
                    <<sock.remote_endpoint().port()<<std::endl;
      //���󷵻ض���
      boost::system::error_code errcode;
      //���ͻ�Ӧ����
      sock.write_some(boost::asio::buffer("hello boost aiso world"),errcode);
      if(errcode){
          std::cout<<boost::system::system_error(errcode).what()<<std::endl;
          break;
      }
    }
    return 0;
}

