#include<iostream>
using namespace std;
class A{
    public:
A(){
    cout<<"i am default constructor of A"<<endl;
}
~A(){
    cout<<"i am a defult destructor of A"<<endl;
}
void data(){
    cout<<"i am a function of A"<<endl;
}
};
class B : public A{
    public:
B(){
    cout<<"i am default constructor of B"<<endl;
}
~B(){
    cout<<"i am a defult destructor of B"<<endl;
}
void data1(){
    cout<<"i am a function of B"<<endl;
}
};
class C: public A{
    public:
C(){
    cout<<"i am default constructor of C"<<endl;
}
~C(){
    cout<<"i am a defult destructor of C"<<endl;
}
void data2(){
    cout<<"i am a function of C"<<endl;
}
};

int main(){
 C c;
 c.data2();
 return 0;
}