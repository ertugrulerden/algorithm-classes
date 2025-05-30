#include<iostream>
using namespace std;

class Displau{
    public:
        void show(){
            cout << "Non-parameter func" << endl;
        }
        void show(int i){
            cout << "integer parameter func: " << i << endl;
        }
        void show(double d){
            cout << "double parameter func: " << d <<endl;
        }

};

// Overriding:
class basicClas{
    public:
        virtual void show(){
            cout << "basic class method" << endl;
        }
};

class inheritancedClass: public basicClas{
    public:
        void show() override {
            cout << "inheritanced class method (overrided the old func)" << endl;
        }
};



int main(){
    Displau d1;
    d1.show();
    d1.show(5);
    d1.show(5.5);

    cout << endl;

    inheritancedClass newObj;
    newObj.show();



    return 0;
}