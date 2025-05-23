#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        void printDetails();
};

void Car::printDetails(){
    cout << brand << " \t " << model << " \t " << year << endl;
}


class Notes{
    public:
        int midtermNote;
        int finalNote;
        void enterNotes(){
            cout << "Enter midterm result: "; cin >> midtermNote;
            cout << "Enter finals result: "; cin >> finalNote;
        }
        void calcNote(){
            float average = midtermNote*0.4 + finalNote*0.6;
            cout<<"Result: " << average << endl;
        }

};


int main(){
    Car C1;
    C1.brand = "Porsche";
    C1.model = "GT 3 RS";
    C1.year = 2024;

    Car C2;
    C2.brand = "Lamborghini";
    C2.model = "Aventador";
    C2.year = 2013;

    C1.printDetails();
    C2.printDetails();
    cout << endl;



    Notes n1;
    n1.enterNotes();
    n1.calcNote();



    return 0;
}