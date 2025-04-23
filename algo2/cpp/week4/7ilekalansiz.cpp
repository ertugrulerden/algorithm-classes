#include<iostream>

using namespace std;

int main(){

    int start,end;
    cout << "Enter the start num: "; cin >> start;
    cout << "Enter the end num: "; cin >> end;

    for (int i = start; i<=end; i++){
        if (i%7==0) cout << i << " ";
    }


    return 0;
}