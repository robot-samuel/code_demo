//10-callbackfunparam

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

using namespace boost;


void print(const boost::system::error_code& /*error*/, 
                boost::asio::deadline_timer* t, int* count)
{
   
    if((* count)<=5){
          std::cout << "Hello, 09-async_timer!"<<(* count)<<"\n";
          t->expires_at(t->expires_at() + boost::posix_time::seconds(1));

          t->async_wait(boost::bind(print,boost::asio::placeholders::error, t, count));

    }
    ++(* count);
}

int main(int argc, char **argv)
{
     int count = 0;
     
    boost::asio::io_service service;
    boost::asio::deadline_timer t(service, boost::posix_time::seconds(1));
    
    //异步等待，此处 立刻返回
    t.async_wait(boost::bind(print,boost::asio::placeholders::error, &t, &count));


     std::cout << "async_wait..............\n";
    //等到事件发生
    service.run();
    
    std::cout << "Final count is " << count << "\n";

    return 0;
}
