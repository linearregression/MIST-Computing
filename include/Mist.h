#pragma once

#include <stdlib.h>
#include <string>

enum NETWORK_STATE {CLIENT, SERVER};

namespace Mist{
    static std::string PRODUCT_NAME = "MIST Computing";
    static std::string VERSION_ID = "alpha";

    namespace Machine{

        struct computer{
            int id;
            std::string name;
            std::string ip;
            int memory; //in gigabytes
        };
    }
}
