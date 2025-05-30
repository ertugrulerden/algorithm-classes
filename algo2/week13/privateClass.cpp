#include<iostream>
using namespace std;

class access{
    private:
        int privateVar;
    
    public:
        access(int val) { privateVar = val; }
        access() { privateVar = 0; } // Default constructor

        void showPrivateVar(){
            cout << "Private variable: " << privateVar << endl;
        }

};

int main(){
    access obj[10]; // Uses default constructor
    for(int i = 0; i < 10; ++i) {
        obj[i].showPrivateVar();
    }
}


/*
private
protected

encapsulation
    get, set
java/C#

*/