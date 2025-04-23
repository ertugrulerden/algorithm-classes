#include<iostream>
using namespace std;

int main(){
    char sesli[] = {'a','e','i','o'};
    int count=0;
    string metin;
    cout << "String giriniz: "; cin >> metin;

    for (char i : metin){
        for (char j : sesli){
            if (tolower(i) == tolower(j)){
                count++;
                break;
            }
        }
        
    }
    cout << "Sessiz harf sayisi: " << metin.length() - count << endl;

    return 0;
}