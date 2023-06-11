//inheritance
#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"hello i am a class  A constructor"<<endl;
    }
    ~A(){
        cout<<"i am default A destructor"<<endl;
    }
    void data1(){
        cout<<"hello i am class A function"<<endl;;
    }
};
class B : public A{
    public:
    B(){
        cout<<"hello i am a class B constructor"<<endl;;
    }
    ~B(){
        cout<<"i am default B destructor"<<endl;
    }
    void data1(){
        cout<<"hello i am class B function"<<endl;;
    }
};


int main(){
  B b;
  b.data1();
}