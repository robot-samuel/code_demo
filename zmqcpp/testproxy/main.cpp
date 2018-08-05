//
//  Weather proxy device C++
//
// Olivier Chamoux <olivier.chamoux@fr.thalesgroup.com>
//
#include <iostream>  
#include <sstream> 
#include <string> 
//#include <zmq.hpp>
#include "cppzmq-master/zmq.hpp"


using namespace zmq;
using namespace std;

void print_zmq_version(){
    int major, minor, patch;
    version (&major, &minor, &patch);
    std::cout << "Current 0MQ version is " << major << "." << minor << "." << patch << std::endl;
	
}


int main (int argc, char *argv[])
{
    print_zmq_version();
	context_t context(1,1024);

    //  This is where the weather server sits
   socket_t frontend(context, ZMQ_SUB);
    frontend.bind("tcp://*:2015");

    //  This is our public endpoint for subscribers
    socket_t backend (context, ZMQ_PUB);
    backend.bind("tcp://*:2016");

    //  Subscribe on everything
    frontend.setsockopt(ZMQ_SUBSCRIBE, "", 0);

    //  Shunt messages out to our own subscribers
    while (1) {
        while (1) {
            zmq::message_t message;
            int more;
            size_t more_size = sizeof (more);

            //  Process all parts of the message
            frontend.recv(&message,0);
            frontend.getsockopt( ZMQ_RCVMORE, &more, &more_size);
            backend.send(message, more? ZMQ_SNDMORE: 0);
            if (!more)
                break;      //  Last message part
        }
    }
    return 0;
}
