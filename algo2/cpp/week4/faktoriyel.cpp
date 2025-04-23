#include<iostream>

using namespace std;


int main(){

    int x;
    cout << "enter a num to find its factorial: "; cin >> x;
    int fak = 1;
    for(int i = x; i>=1; i--){
        fak*=i;
    }
    cout << x << "! = " << fak << endl;

    return 0;
}