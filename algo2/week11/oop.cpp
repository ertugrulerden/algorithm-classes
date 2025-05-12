#include <string>
using namespace std;
#include <iostream>


class MyClass{
    public:
    int myNum;
    string myString;
};

class Car{
    public:
    string brand;
    string model;
    int year;
    void displayInfo();

    Car(string x, string y, int z){ // constructor
        brand = x;
        model = y;
        year = z;
    }
};

void Car::displayInfo(){
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
}

int main(){
    MyClass MyObj;
    MyObj.myNum = 55;

    // Car myCar;
    // myCar.year = 2020;
    // myCar.brand = "Ford";
    // myCar.model = "Mustang";

    Car myCar1("Toyota", "Corolla", 2022);
    Car myCar2("BMW", "X5", 2023);

    



    myCar1.displayInfo();

    return 0;
}