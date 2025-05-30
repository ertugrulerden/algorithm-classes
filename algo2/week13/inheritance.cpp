#include<iostream>
using namespace std;


class Vehicle{
    public:
        string brand = "Lamborghini";
        void seeBrand(){
            cout << "Brand: " << brand << endl;
        }
};

// inheritance:
class Car: public Vehicle{
    public:
        string model = "Veneno";
};


// multilevel inheritance
class parentClass{
    public:
        void myFn(){
            cout << "parent class content" << endl;
        }
};

class childClass: public parentClass{
    public:
        void childFn(){
            cout << "child class content" << endl;
        }
};

class grandChildClass: public childClass{
    public:
        void gcFn() {
            cout << "grandchild class content" << endl;
        }
};


// multiple inheritance (çoklu miras):

class firstClass {
    public:
        void myFn() {
            cout << "firstClass content" << endl;
        }
};

class secondClass {
    public:
        void secondFn() {
            cout << "secondClass content" << endl;
        }
};

class multipleInheritence: public firstClass, public secondClass {

};


int main(){

    Car c1;
    c1.seeBrand();
    cout << "Model: " << c1.model << endl << endl;

    grandChildClass gc;
    gc.myFn();
    gc.childFn();
    gc.gcFn();

    cout << endl;

    multipleInheritence myMulti;
    myMulti.myFn();
    myMulti.secondFn();


    return 0;
}