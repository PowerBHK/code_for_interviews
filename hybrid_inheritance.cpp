#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"i am A's default costructor"<<endl;
    }
    ~A(){
        cout<<"i am A's default destructor"<<endl;
    }
    void fun(){
        cout<<"i am A's function"<<endl;
    }
};
class B : virtual public A{
    public:
    B(){
        cout<<"i am B's default costructor"<<endl;
    }
    ~B(){
        cout<<"i am B's default destructor"<<endl;
    }
    void fun(){
        cout<<"i am B's function"<<endl;
    }
};
class C : virtual public A{
    public:
    C(){
        cout<<"i am C's default costructor"<<endl;
    }
    ~C(){
        cout<<"i am C's default destructor"<<endl;
    }
    void fun(){
        cout<<"i am C's function"<<endl;
    }
};
class D : public B,public C{
    public:
    D(){
        cout<<"i am D's default costructor"<<endl;
    }
    ~D(){
        cout<<"i am D's default destructor"<<endl;
    }
    void fun(){
        cout<<"i am D's function"<<endl;
    }
};
int main(){
    D d;
    d.fun();
    d.C::fun();//calling a function scopresoultion operater
    d.B::fun();
    d.A::fun();
    return 0;
}
