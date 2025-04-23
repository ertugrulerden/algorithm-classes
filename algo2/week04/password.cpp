#include<iostream>
#include<string>
using namespace std;

//sayisal sifre, ardisik sayiysa kabul etmeyen
int main(){

    string passwd;
    cout << "Sayisal bir sifre giriniz: "; cin >> passwd;

    int firstNum = int(passwd[0]);
    cout << firstNum;
        // for (int i = 0; i<passwd.length(); i++){ 
            
        // }


    // } while (!acceptable); 

    return 0;
}