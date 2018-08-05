#pragma once

#include <boost/asio.hpp>

class SimpleSerial
{
private:
    SimpleSerial(const SimpleSerial& rhs);
    SimpleSerial& operator=(const SimpleSerial& rhs);

public:
   SimpleSerial(std::string &port, unsigned int baud_rate);
    ~SimpleSerial();
 std::size_t  writeString(std::string &s);
 std::string  readLine();
private:
    boost::asio::io_service io;
    boost::asio::serial_port serial;

};

