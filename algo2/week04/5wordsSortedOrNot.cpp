#include<iostream>
using namespace std;

// kucukten buyuge.

int main(){
    int num; bool sorted = true;
    for (int i = 1; i<=5; i++){
        int oldNum=num;
        cout<<i<<". sayiyi girin: "; cin >> num;
        if ( i!=1 && !(oldNum < num)){
            sorted = false;
            break;
        }
    }
    cout << "Bu liste sirali";
    if (!sorted) cout << " degil.";
    cout << endl;

    return 0;
}