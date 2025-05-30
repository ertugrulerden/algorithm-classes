#include<iostream>
using namespace std;

class Employee{
    private:
        int wage;
    
    public:
        void setWage(int wageInput){
            wage = wageInput;
        }

        int getWage(){
            return wage;
        }
};


int main(){
    Employee e1;
    e1.setWage(500);
    cout << e1.getWage();



    return 0;
}