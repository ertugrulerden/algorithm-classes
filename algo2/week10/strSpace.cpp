#include <iostream>
#include <string>
using namespace std;

// find the count of spaces in an input string

int main(){

    string str;
    int count = 0;
    cout << "Enter a string: "; getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ') count++;
    }
    cout << "spaces: " << count << endl;

    return 0;
    
}