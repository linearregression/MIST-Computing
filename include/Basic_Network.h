#pragma once

#include <vector>
#include <string>

#include "Mist.h"

namespace Mist{
    namespace Machine{
        class Basic_Network{
        private:
            //fields
            NETWORK_STATE state;
            std::string ip;
            std::string server_name;
            std::vector<char> data; //change to void* eventually
            bool isClientRunning;
            bool isServerRunning;

            //other
            void open();

        public:
            Basic_Network(NETWORK_STATE state, Mist::Machine::computer comp);

            void queueFile(std::string filename);
            void killServer();
            void killClient();

            std::vector<char> getData();
        };
    }
}
