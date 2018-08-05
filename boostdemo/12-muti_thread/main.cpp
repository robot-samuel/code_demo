
#include "printer.hpp"
#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/thread.hpp>




int main(int argc, char **argv)
{
    boost::asio::io_service io;
    printer p(io);
    
    boost::thread t(boost::bind(&boost::asio::io_service::run, &io));
    
    io.run();
    
    t.join();
    
    return 0;

}
