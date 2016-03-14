#pragma once

#include "Shared_Variable.h"

//TODO only difference is that you can't use =

template <class T>
class Shared_Numerical:
  public Shared_Variable //extends Shared_Variable
{
private:
  T val;
public:
  Shared_Numerical(T var)
  {
	  val = var;
  };
  Shared_Numerical()
  {

  };
  T get()
  {
      return val;
  };

  void set(T val)
  {
      this->val = val;
  };

  //OPERATORS
    //will not work with non-numerical values
    //Shared Variables
    void operator+= (Shared_Numerical& var)
	{
    	set(val + var.get());
	}; //shorthand add
    void operator-= (Shared_Numerical& var)
	{
    	set(val - var.get());
	}; //shorthand subtract
    void operator*= (Shared_Numerical& var)
   	{
    	set(val * var.get());
   	}; //shorthand multiplication
    void operator/= (Shared_Numerical& var)
    {
    	set(val / var.get());
	}; //shorthand division
    void operator%= (Shared_Numerical& var)
	{
    	set(val%var.get());
	};
    void operator++()
	{
    	val++;
	};
    T operator+ (Shared_Numerical& var)
    {
    	return val + var.get();
    }; //addition
    T operator- (Shared_Numerical& var)
    {
    	return val - var.get();
    }; //subtraction
    T operator* (Shared_Numerical& var)
    {
    	return val * var.get();
	}; //multiplication
    T operator/ (Shared_Numerical& var)
	{
    	return val / var.get();
	}; //division
    T operator% (Shared_Numerical& var)
	{
    	return val % var.get();
	}; //modulus
    bool operator== (Shared_Numerical& var)
	{
    	if(val == var.get())
    	{
    		return true;
    	}else{
    		return false;
    	}
	}; //test equal
    bool operator!= (Shared_Numerical& var)
   	{
    	if(val != var.get())
    	{
    		return true;
    	}else{
    		return false;
    	}
   	}; //test not equal
    bool operator>= (Shared_Numerical& var)
	{
    	if(val >= var.get())
    	{
    	   return true;
    	}else{
    	   return false;
    	}
	}; //test greater than or equal to
    bool operator<= (Shared_Numerical& var)
	{
    	if(val <= var.get())
    	{
    	   return true;
    	}else{
    	   return false;
    	}
	}; //test less than or equal to
    bool operator> (Shared_Numerical& var)
    {
    	if(val > var.get())
    	{
    	   return true;
    	}else{
    	   return false;
    	}
    }; //test greater than
    bool operator< (Shared_Numerical& var)
    {
      if(val < var.get())
      {
        return true;
      }else{
        return false;
      }
    }; //test less than

    //Regular Variables
    void operator+= (T var)
   	{
    	set(val + var);
   	};
    void operator-= (T var)
    {
    	set(val-var);
    };
    void operator*= (T var)
	{
    	set(val*var);
	};
    void operator/= (T var)
	{
    	set(val/var);
	};
    void operator%= (T var)
	{
    	set(val%var);
	};
    T operator+ (T var)
    {
    	return val+var;
    };
    T operator- (T var)
    {
    	return val-var;
    };
    T operator* (T var)
	{
    	return val*var;
	};
    T operator/ (T var)
	{
    	return val/var;
	};
    T operator% (T var)
	{
    	return val%var;
	};
    bool operator== (T var)
	{
    	if(val == var)
    	{
    		return true;
    	}else{
    		return false;
    	}
	};
    bool operator!= (T var)
	{
    	if(val != var)
    	{
    		return true;
    	}else{
    		return false;
    	}
	}
    bool operator>= (T var)
	{
    	if(val >= var)
    	{
    		return true;
    	}else{
    		return false;
    	}
	};
    bool operator<= (T var) //test less than or equal to
    {
    	if(val <= var)
    	{
    		return true;
    	}else{
    		return false;
    	}
    };
    bool operator> (T var) //test greater than
    {
    	if(val>var)
    	{
    		return true;
    	}else{
    		return false;
    	}
    };
    bool operator< (T var) //test less than*/
    {
    	if(val<var)
    	{
    		return true;
    	}else{
    		return false;
    	}
    };
};
