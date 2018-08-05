//09-async_timer

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

using namespace boost;

void print(const boost::system::error_code& error)
{
  std::cout << "Hello, 09-async_timer!\n";
}

int main(int argc, char **argv)
{
    boost::asio::io_service service;
    boost::asio::deadline_timer t(service, boost::posix_time::seconds(10));
    
    //异步等待，此处 立刻返回
    t.async_wait(print);
    
    std::cout << "async_wait..............\n";
    //等到事件发生
    service.run();
    
    return 0;
}
