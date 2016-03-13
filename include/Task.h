#pragma once

#include "Mist.h"
#include <string>

namespace Mist{
    class Task{
    private:
        //fields
        int id;
        std::string task_name;
        int machine_id;

        //other
        bool isTaskRunning;
    public:
        Task(int id, std::string task_name, int machine_id);
        void start();
        virtual void Run();
        virtual void Cancel();
    };
}
