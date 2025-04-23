#include <iostream>
#include <string>

using namespace std;

int main(){

    int x = 5, y = 3;
    ++x;
    x-=1;
    cout << x << endl;

    cout << x%y << endl;
    cout << (x==y) << endl;
    cout << (x!=y) << endl;
    cout << (x>y) << endl;


    string txt = "algorithm";
    cout << "str length: " << txt.length() << endl;
    cout << "str length: " << txt.size() << endl;

    txt[0] = 'A';
    cout << txt << endl;

    cout << "Last char: " << txt[txt.length() - 1] << endl;

    return 0;
}