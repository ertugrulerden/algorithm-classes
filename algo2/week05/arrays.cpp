#include<iostream>
#include<string>
using namespace std;

int main(){

    int arr[5];
    arr[0] = 5;
    arr[1] = 3;
    arr[2] = 7;
    arr[3] = 1;
    arr[4] = 9;

    cout << arr[1] << endl;

    int nums[3] = {10, 20, 30};

    string cars[] = {"BMW", "Audi", "Mercedes"};
    int carsArrayLength = sizeof(cars)/sizeof(cars[0]);
    cout << "cars array length: " << carsArrayLength << endl;


    return 0;
}

// dinamik dizi: std::vector 