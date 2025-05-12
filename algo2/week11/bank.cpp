#include <iostream>
#include <string>
using namespace std;


class Bank{
    public:
    int balance;
    int id;
    void cashout(int amount);
    void deposit(int amount); 
    void displayBalance();
    
    Bank(int accountId){
        id = accountId;
        balance = 0;
    }
};
void Bank::displayBalance(){
    cout << "Account ID: " << id << endl;
    cout << "Balance: " << balance << endl;
}
void Bank::deposit(int amount){
    if (amount<=0){ cout<<"Please enter a positive amount."<<endl; return;}
    cout<<"Deposited amount: " << amount << endl;
    balance += amount;
}

void Bank::cashout(int amount){
    if (amount<=0){ cout<<"Please enter a positive amount."<<endl; return;}
    cout << "Withdrawn amount: " << amount << endl;
    balance -= amount;
}




int main(){

    Bank myBank(123456);
    myBank.deposit(1000);
    myBank.displayBalance();

    myBank.cashout(500);
    myBank.displayBalance();

    myBank.deposit(-100);
    myBank.displayBalance();

    myBank.cashout(200);
    myBank.displayBalance();



}