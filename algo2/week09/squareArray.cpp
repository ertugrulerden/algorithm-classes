#include<iostream>
using namespace std;

//take elements from an array then put them squares in to another array
void getSquares(int source[], int target[], int L){
    for (int i=0; i<L; i++){
        target[i] = source[i]*source[i];
    }
}

void printArray(int array[], int L){
    for (int i=0; i<L; i++){
        cout << array[i] << " ";
    } cout << endl;
}


int main(){
    const int length = 10;
    int arr1[length];
    int arr2[length];
    for (int i=0; i<length; i++){
        arr1[i]=i+1;
    }

    printArray(arr1, length);
    getSquares(arr1, arr2, length);
    printArray(arr2, length);


    return 0;
}