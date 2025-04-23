#include <iostream>

using namespace std;

int main(int argc, char** argv){

    cout << "testing" << endl;

    int sayi;
    sayi = 12;
    const int degistirilemezSayi = 22;

    cout << sayi << endl;

    sayi = 27;
    double f = 5.3;
    char c = 'c';
    string s = "str test";

    cout << sayi << endl << endl;

    int n1, n2;
    cout << "1st num: "; cin >> n1;
    cout << "2nd num: "; cin >> n2;
    cout << n1 << " + " << n2 << " = " << n1+n2 << endl << endl;

    int vize, final;
    string durum = "Kaldi";
    double ortalama;
    string harf = "FF";

    cout << "Vize: "; cin >> vize;
    cout << "Final: "; cin >> final;
    
    ortalama = vize*0.4 + final*0.6;
    if (ortalama>=50) durum = "Gecti";
    
    if (ortalama >= 50 && ortalama < 70){
        harf = "BB";
    } else if (ortalama >= 70 && ortalama < 90){
        harf = "BA";
    } else if (ortalama >= 90){
        harf = "AA";
    }

    cout << "Ort: " << ortalama << " => " << durum << ". " << "Harf notu: " << harf << endl;

    






    return 0;
}