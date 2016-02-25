#include "Mist.h"

template <class T>
class Shared_Variable{
    friend class Mist;
private:
    T val;
public:
    T get();
    void set(T val);
protected:
    
};
