#pragma once

#include <vector>
#include <string>

#include <boost/asio.hpp>
#include "Mist.h"

namespace Mist::Machine{
    class Basic_Network: public Mist{
    private:
        int id;
        std::string ip;

    public:
        Basic_Network(int id, string ip);
        void writeToFile(std::string data, std::string filename, std::string extention);
        //void writeToFile(std::vector<String> data, std::string filename, std::string extention); //TODO: This won't work probably maybe idk

        void queueFile(std::string filename);
};
}


