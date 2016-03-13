#include "../../include/Basic_Network.h"
#include <boost/asio.hpp>

using boost::asio::ip::tcp;
using boost::asio;

namespace Mist{
    namespace Machine{
        Basic_Network::Basic_Network(NETWORK_STATE state, Mist::Machine::computer comp){
            server_name = comp.name;
            ip = comp.ip;
            this->state = state;
            open();
        }

        void Basic_Network::open(){
            if(state == SERVER){

            }
            else if(state ==  CLIENT){
                isServerRunning = true;

                boost::asio::io_service io_service;
                tcp::resolver resolver(io_service);
                tcp::resolver::query query(server_name, "daytime");
                tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
                tcp::socket socket(io_service);
                boost::asio::connect(socket, endpoint_iterator);

                std::cout << "Info: Client listening" << std::endl;

                while(isServerRunning){
                    std::vector<char> buf; //need to figure out a way to send more than just characters
                    boost::system::error_code error;

                    size_t len = socket.read_some(boost::asio::buffer(buf), error);

                    if (error == boost::asio::error::eof)
                        isServerRunning = false; // Connection closed cleanly by peer.
                    else if (error)
                        throw boost::system::system_error(error); // Some other error.

                    data = buf;
                }
            }
        }

        std::vector<char> Basic_Network::getData(){
            return data;
        }
    }
}
