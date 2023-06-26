// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Singleton {
private:
int a;
char c;
static Singleton* instance;

Singleton() {
// Private constructor
}

public:
Singleton(const Singleton& obj) = delete;

static Singleton* getInstance() {
if (instance == NULL) {
instance = new Singleton();
}

return instance;
}

void setValues(int x, char ch) {
a = x;
c = ch;
}

void print() {
cout << a << c << endl;
}
};

// Initialize the static member
Singleton* Singleton::instance = nullptr;

int main() {
Singleton* pattern = Singleton::getInstance();
pattern->setValues(3, 'r');
pattern->print();

Singleton* pattern2 = Singleton::getInstance();
pattern2->setValues(5, 'x');
pattern2->print();

return 0;
}
