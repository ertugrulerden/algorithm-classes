#include<iostream>
#include<string>
using namespace std;


int square(int num){
    return num * num;
}

void print(){
    cout << "Algorithm and programming 2" << endl;
}

// take input from user -- str
// look for the character --char
// create a func to return the amount of that char --int
int findChar(string s, char c){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == c){
            count++;
        }
    }
    return count;
}

int main(){
    cout << square(5) << endl;
    print();
    
    string s;
    char c;
    cout << "Enter a string: "; cin >> s;
    cout << "Enter a char: "; cin >> c;
    cout << "Char count: " << findChar(s, c) << endl;

    

    
    return 0;
}