#include <iostream>
#include <string>
using namespace std;


class Bank{
    public:
    int bakiye;
    int tc;
    void cashout(int miktar);
    void yatir(int miktar);
    void bakiyeGoruntule();
    
    Bank(int tcNo){
        tc = tcNo;
        bakiye = 0;
    }
};
void Bank::bakiyeGoruntule(){
    cout << "tcNo: " << tc << endl;
    cout << "bakiye: " << bakiye << endl;
}
void Bank::yatir(int miktar){
    if (miktar<=0){ cout<<"pozitif miktar girin."<<endl; return;}
    cout<<"eklenen miktar: " << miktar << endl;
    bakiye += miktar;
}

void Bank::cashout(int miktar){
    if (miktar<=0){ cout<<"pozitif miktar girin."<<endl; return;}
    cout << "çekilen miktar: " << miktar << endl;
    bakiye -= miktar;
}




int main(){

    Bank myBank(123456);
    myBank.yatir(1000);
    myBank.bakiyeGoruntule();

    myBank.cashout(500);
    myBank.bakiyeGoruntule();

    myBank.yatir(-100);
    myBank.bakiyeGoruntule();

    myBank.cashout(200);
    myBank.bakiyeGoruntule();



}