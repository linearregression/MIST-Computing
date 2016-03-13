#pragma once

#include <string>

namespace Mist{
    void writeToFile(std::string data, std::string filename, std::string extention){ //TODO: manage file location!
        std::string writecommand = "java -jar WriteFile.jar ";
        writecommand.append(data);
        writecommand.append(" ");
        writecommand.append(filename);
        writecommand.append(" ");
        writecommand.append(extention);

        system(writecommand.c_str());
    }
}
