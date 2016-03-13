#pragma once

namespace Mist{
    class Task{
    private:
        //fields
        int 

        //other
        bool isTaskRunning;

        
    public:
        Task(int id, std::string name, int machine_id);
        void start();
        virtual void Run();
        virtual void Cancel();
        
    
    };
}
