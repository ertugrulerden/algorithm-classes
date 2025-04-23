#include <iostream>
#include <cmath>

using namespace std;
//standart library

int main(){

    
    string isim;
    cout << "Enter your name: ";
    cin >> isim;

    cout << "Hello, " << isim << "!" << endl;

    int sayi1, sayi2;
    cout << "Kisa kenari gir: "; cin >> sayi1;
    cout << "Uzun kenari gir: "; cin >> sayi2;
    cout << "Ortalama: " << (float) (sayi1+sayi2)/2 << endl;
    cout << "Cevre: " << (sayi1+sayi2)*2 << endl;
    cout << "Alan: " << sayi1*sayi2 << endl;

    char karakter;
    cout << "Karakter gir: "; cin >> karakter;
    cout << karakter << "'nin ASCII kodu: " << int(karakter) << endl;
    

    


    


    return 0;
}