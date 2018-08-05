#pragma once

#include <boost/asio.hpp>

class printer
{
private:
    printer(const printer& rhs);
    printer& operator=(const printer& rhs);
    
    
    boost::asio::strand strand_;
    boost::asio::deadline_timer timer1_;
    boost::asio::deadline_timer timer2_;
    int count_;
public:
    printer(boost::asio::io_service& io);
    ~printer();

    void print1();
    void print2();
};

