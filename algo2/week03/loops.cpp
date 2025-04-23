#include<iostream>

using namespace std;

int main(){


    int a = 0;
    while(a<5){
        cout << a++ << endl;
    }
    cout << "--------" << endl;

    int x = 0;
    do{
        cout << x << endl; x++;
    } while (x<5);
    cout << "--------" << endl;

    for (int i = 0; i < 10; i+=2){
        if (i==4){ continue; }
        cout << i << endl;
    }
    cout << "--------" << endl;

    int y, poz=0, top=0;
    do {
        cout << "Enter negative num: "; cin >> y;
        if (y>=0){
            poz++; top+=y;
        }
    } while (y>=0);
    cout << poz << " tane pozitif sayi girildi." << endl << "Toplam: " << top << "\t Ort: " << (float) top/poz << endl;
    cout << "--------" << endl;


    int z, enKucuk = MAX_INPUT;
    cout << "Kac sayi girilecek: "; cin >> z;

    int num;
    for (int i = 0; i < z; i++){
        cout << "Enter num: "; cin >> num;
        if (num < enKucuk){
            enKucuk = num;
        }
    }
    cout << "En kucuk: " << enKucuk << endl;



    return 0;
}