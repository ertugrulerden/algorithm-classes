#include <iostream>

using namespace std;

int main(){
    int x = 7;

    int tahmin;
    
    cout << "bir sayi tahmin edin: "; cin >> tahmin;
    for(int i = 2; i>=0; i--){
        if (x!=tahmin){
            cout << "yanlis tahmin, kalan hak: " << (i) << endl;
            if (i==0){
                cout << "hakkiniz bitti, dogru cevap " << x << " idi" << endl;
            } else {
                cout << "tekrar deneyin: "; cin >> tahmin;
            }
        } else {
            cout << "Tebrikler!" << endl;
            break;
        }
    }
    

    
}