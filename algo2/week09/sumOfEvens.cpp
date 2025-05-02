#include<iostream>
using namespace std;

//a function to return the sum of even basamaks
// 2345 -> 2+4
int sumOfEvens(int num){
    int sum = 0;

    do {
        int lastNum = num%10;
        if ((lastNum)%2==0){
            sum+=lastNum;
        }
        num /= 10;

    } while (num>0);
    return sum;

}



int main(){
    int number;
    cout << "Enter a number: "; cin >> number;
    cout << "sum: " << sumOfEvens(number) << endl;

    return 0;
}