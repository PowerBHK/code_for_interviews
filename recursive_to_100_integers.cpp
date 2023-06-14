#include<iostream>
using namespace std;

int sum(int n);

int main() {
    int n=100;
    
    
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    
    int s = sum(n);
    cout << "Sum: " << s << endl;
    
    return 0;
}

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sum(n - 1);
    }
}
