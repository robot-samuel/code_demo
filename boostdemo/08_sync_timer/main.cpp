// 08_sync_timer

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>


int main(int argc, char **argv)
{
   boost::asio::io_service service;
    
   boost::asio::deadline_timer t(service, boost::posix_time::seconds(20));

    //½øÐÐ×èÈûµÈ´ý(blocking wait). 
    t.wait();
    
    //std::cout << "Hello, 08_sync_timer!\n"<<std::endl;
    std::cout << "Hello, 08_sync_timer!\n";
    return 0;
}
