#include<iostream>
using namespace std;
template<class T>
class SmartPtr
{
   T *ptr;
public:
   SmartPtr(T *p)//calling constructor with paramter as pointer
   {
     ptr = p;//assiging that pointer to ptr variable
   }
   ~SmartPtr()
   {
    delete(ptr);//deleting the pointer
    cout<<" Destructor Called"<<endl;
   }
  T& operator *()//function that retuns address and over loads Asterik * operator
   {
        return *ptr;//returns pointer
   }
};
   int main()
   {
 
        SmartPtr ptr(new int());
        SmartPtr ptr1(new char());
        *ptr = 100;
        *ptr1 = 'a';
        cout<<*ptr<<endl;
         cout<<*ptr1<<endl;
    return 0;
   }