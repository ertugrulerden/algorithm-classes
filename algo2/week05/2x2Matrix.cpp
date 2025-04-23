#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>

int main(){
    int arr1[2][2];
    cout << "First array:" << endl;
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cout << "Enter num (" << i << ", " << j << "): "; cin >> arr1[i][j];

        }
    }

    int arr2[2][2];
    cout << "Second array:" << endl;
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            cout << "Enter num (" << i << ", " << j << "): "; cin >> arr2[i][j];

        }
    }



    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr1[i][j] << " ";
        } cout << endl;
    } cout << endl;

    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << arr1[i][j] << " ";
        } cout << endl;
    } cout << endl;

    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            
        } cout << endl;
    } cout << endl;




    return 0;
}