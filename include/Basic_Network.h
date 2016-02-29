#pragma once

#include <vector>
#include <string>

#include <boost/asio.hpp>
#include "Mist.h"

class Basic_Network: public Mist{
private:
    int id;
    std::string ip;

    bool clientRunning;
    bool serverRunning;
public:
    Basic_Network(int id, string ip, boost::asio::ios_service ios);
    void writeToFile(std::string data, std::string filename, std::string extention);
    //void writeToFile(std::vector<String> data, std::string filename, std::string extention); //TODO: This won't work probably maybe idk

    void startClient();
    void startServer();

    void setServerRunning(bool running);
    void setClientRunning(bool running);

    void queueFile(std::string filename);
};

