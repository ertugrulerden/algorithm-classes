#include<iostream>

using namespace std;

int main(){

    int input;
    int sum = 0;
    do{
        cout << "Bir sayi girin (0 girisi donguyu sonlandirir): "; cin >> input;
        sum+=input;
    } while (input != 0);

    cout << "Dongu sonlandi, toplam: " << sum << endl;


    return 0;
}