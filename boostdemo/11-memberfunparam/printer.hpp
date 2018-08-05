#pragma once

#include <boost/asio.hpp>

class printer
{
private:
    printer(const printer& rhs);
    printer& operator=(const printer& rhs);
    
    boost::asio::deadline_timer timer_;
    int count_;

public:
    printer(boost::asio::io_service& io);
    ~printer();
    
    void print();

};

