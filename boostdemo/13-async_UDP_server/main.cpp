#include "udp_server.hpp"

#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/format.hpp>

#include <boost/smart_ptr.hpp>


#include <iostream>
#include <memory>
#include <string>


int main(int argc, char **argv)
{
    try{
            boost::asio::io_service io;
            udp_server server(io);
            io.run();
            
        }
    catch(std::exception& e){
        
            std::cerr << e.what() << std::endl;
        }
	return 0;

}
