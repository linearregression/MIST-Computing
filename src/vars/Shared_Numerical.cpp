#include "../../include/Shared_Numerical.h"

template <class T>
T Shared_Numerical<T>::get(){
    return val;
}

template <class T>
void Shared_Numerical<T>::set(T val){
    this->val = val;
}
