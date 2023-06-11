#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am A's defaault constructor"<<endl;
    }
    ~A(){
        cout<<"I am A's defaault Destructor"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"I am B's defaault constructor"<<endl;
    }
    ~B(){
        cout<<"I am B's defaault Destructor"<<endl;
    }
    void printdata(){
        cout<<"i am B's data function"<<endl;
    }
};
class C : public A,public B{
    public:
    C(){
        cout<<"I am C's defaault constructor"<<endl;
    }
    ~C(){
        cout<<"I am C's default Destructor"<<endl;
    }
    void printdata(){
        cout<<"i am C's data function"<<endl;
    }
};
int main(){
    C c;
    c.printdata();

}

