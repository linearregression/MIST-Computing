#include "Mist.h"

//TODO break up into multiple types instead of a general wrapper?
//ex: shared_numerical, shared_string, shared_array, shared_vector, etc.
//prevents people from using operators that aren't supported by that variable

class Shared_Variable{ //Supports 32 bit or less on 32 bit version, supports 64 bit or less on 64 bit version
    friend class Mist;
private:
public:
    Shared_Variable(); //constructs Shared_Variable with a value and whether or not the variable is volatile (must be kept updated)
    void del_var(); //preps the variable for deletion, marks it as deleted in the registry, deletes any other values associated with it
    //user must call delete after using this
    /*
     * Use it like this:
     * Shared_Variable var;
     * ... (do stuff)
     * var.del_var();
     * delete var;
     */
    
    
protected:
    int Find_Most_Recent(); //returns ID of who has the most recent copy according to the queue
    void Sync(); //automatically syncs the variable with its most recent copy according to the queue.
    void Update_Queue(); //updates the queue, says this computer has the most recent value of it
    int Check_Queue(); //checks which computer has the most recent version, returns ID of that computer
    
};
