#pragma once

#include <boost/asio.hp>

template <class T>
class Server_Socket{
public:
    Server_Socket(boost::asio::io_service io_service, int port)
    boost::asio::io_service getIOService();
private:
    boost::asio::io_service ios;
    int io_port;
protected:
    void start_server()
    boost::asio::io_service getIOService();

};
