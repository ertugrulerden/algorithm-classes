#include<iostream>
#include<string>
using namespace std;

int main(){
    string input; string maxInput;
    int count=0;
    do{
        cout<<"Enter string (type exit to exit): "; cin >> input; count++;
        if (input.length()>maxInput.length()) maxInput = input;

    } while (input!="exit");
    cout << "Longest string with " << maxInput.length() << " characters is " << maxInput << endl;
    cout << "Entered " << count << " strings." << endl;

    return 0;
}