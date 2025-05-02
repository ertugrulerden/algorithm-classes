#include<iostream>
using namespace std;


void printArray(int array[], int L){
    for (int i=0; i<L; i++){
        cout << array[i] << " ";
    } cout << endl;
}

int main(){

    const int length = 10;
    int arr[length];
    for (int i=0; i<length; i++){
        arr[i]=i+1;
    }

    printArray(arr, length);

    return 0;
}