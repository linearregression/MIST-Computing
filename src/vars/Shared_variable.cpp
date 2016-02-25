#include "../../include/Shared_Variable.h"

template <class T>
T Shared_Variable<T>::get(){
    return val;
}

template <class T>
void Shared_Variable<T>::set(T val){
    this->val = val;
}

