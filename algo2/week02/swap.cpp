#include <iostream>

using namespace std;

int main(){
    int a = 5; int b = 10;

    cout << "a: " << a << "\t" << "b: " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a: " << a << "\t" << "b: " << b << endl;

    a = a*b;
    b = a/b;
    a = a/b;

    cout << "a: " << a << "\t" << "b: " << b << endl;
    
    return 0;
}