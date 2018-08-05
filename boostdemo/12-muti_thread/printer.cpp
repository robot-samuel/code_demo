#include "printer.hpp"
#include <string>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/bind.hpp>
#include <boost/smart_ptr.hpp>


printer::printer(boost::asio::io_service& io)
    :strand_(io),
    timer1_(io, boost::posix_time::seconds(1)),
    timer2_(io, boost::posix_time::seconds(1)),
     count_(0)
{
    // timer_.async_wait(boost::bind(&printer::print, this));
     timer1_.async_wait(strand_.wrap(boost::bind(&printer::print1, this)));
      timer2_.async_wait(strand_.wrap(boost::bind(&printer::print2, this)));
     std::cout << "async_wait..............\n";
}

printer::~printer()
{
    std::cout << "Final count is " << count_ << "\n";
}

void printer::print1()
{
  if (count_ < 10)
  {
    std::cout << "Hello, print1"<<count_<<"\n";
   // std::cout << count_ << "\n";
    ++count_;
     
    timer1_.expires_at(timer1_.expires_at() + boost::posix_time::seconds(1));
    timer1_.async_wait(strand_.wrap(boost::bind(&printer::print1, this)));
  }
}
void printer::print2()
{
  if (count_ < 10)
  {
    std::cout << "Hello, print2"<<count_<<"\n";
   // std::cout << count_ << "\n";
    ++count_;
     
    timer2_.expires_at(timer2_.expires_at() + boost::posix_time::seconds(1));
   timer2_.async_wait(strand_.wrap(boost::bind(&printer::print2, this)));
  }
}
