#include<iostream>
using namespace std;

int main(){
    int length;
    cout << "Enter lentgh of the array: "; cin >> length;
    int arr[length];
    for (int i = 0; i<length; i++){
        cout << "Enter element " << i+1 << ": "; cin >> arr[i];
    }
    cout << "Array: ";
    for (int i = length-1; i>=0; i--){
        cout << arr[i] << ", ";
    } cout << endl;


    return 0;
}