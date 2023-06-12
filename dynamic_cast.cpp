#include<iostream>
using namespace std;
class Base
{
   public:
    virtual void fun() // using vitual keyword 
    {
      cout<<" Iam Base class Fun"<<endl;
    }
};
class Derived : public Base
{
   public:
    void fun()
    {
      //Base::fun();
      cout<<"Iam Derived Class Fun"<<endl;
    }
    void foo()
    {
      cout<<"Iam Dervied Class Fun Foo"<<endl;
    }
};
int main()
{
    ///Derived *dptr = new Base;
   Base *bptr = new Derived; // assigned derived class object to base class
   
   cout<<sizeof(Derived)<<endl;
   
   Derived *dptr = dynamic_cast <Derived*>(bptr); //dynamic cast 
   dptr->fun();
   dptr->foo();
  // dynamic_cast <new_Data_Type> (expression);
  if(dptr != NULL)
  {
   cout<<" Dynamic Cast is Successfull (not NULL)"<<endl;
  }
  else
  {
   cout<<" Dynamic Cast is Failed (NULL)"<<endl;
  }
   return 0;
}
