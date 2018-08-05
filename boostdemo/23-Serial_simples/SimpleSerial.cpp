#include "SimpleSerial.hpp"



SimpleSerial::SimpleSerial(std::string &port, unsigned int baud_rate)
:io(),
serial(io,port)
{
        //baud_rate N 8 1
     serial.set_option(boost::asio::serial_port_base::baud_rate( baud_rate ) );                         //比特率
     serial.set_option(boost::asio::serial_port_base::flow_control( boost::asio::serial_port_base::flow_control::none ) ); //流量控制
     serial.set_option(boost::asio::serial_port_base::parity( boost::asio::serial_port_base::parity::none ) );            //奇偶校验
     serial.set_option(boost::asio::serial_port_base::stop_bits(  boost::asio::serial_port_base::stop_bits::one ) );        //停止位
     serial.set_option(boost::asio::serial_port_base::character_size( 8 ) );                       //数据位    
}

SimpleSerial::~SimpleSerial()
{
}


/**
 * Write a string to the serial device.
 * \param s string to write
 * \throws boost::system::system_error on failure
 */
size_t   SimpleSerial::writeString(std::string &s)
{
    std::size_t  data_len = 0;
    boost::system::error_code ec;
    if(serial.is_open()){
        data_len = serial.write_some(boost::asio::buffer(s.c_str(),s.size()), ec);
        if (ec)  
        {  
            std::cout << "write Error: " << ec.message() << std::endl;
            //throw std::system_error(ec);
            data_len=0;
            //break;  
        }  
        }
    return data_len;
    
}


    /**
     * Blocks until a line is received from the serial device.
     * Eventual '\n' or '\r\n' characters at the end of the string are removed.
     * \return a string containing the received line
     * \throws boost::system::system_error on failure
     */
std::string  SimpleSerial::readLine(){
        //Reading data char by char, code is optimized for simplicity, not speed
        //using namespace boost;
        char c;
        std::string result;
        for(;;)
        {
            boost::asio::read(serial,boost::asio::buffer(&c,1));
            switch(c)
            {
                case '\r':
                    break;
                case '\n':
                    return result;
                default:
                    result+=c;
                    std::cout<<c;
                    
            }
        }
    }


