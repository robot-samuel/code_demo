//10-callbackfunparam

#include <string>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>

#include "printer.hpp"

using namespace boost;



int main(int argc, char **argv)
{
    boost::asio::io_service service;
    printer p(service);
    service.run();
    return 0;
}
