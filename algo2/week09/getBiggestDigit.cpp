#include<iostream>
using namespace std;

// wrtie a func to only take 4 digit num and return the biggest digit.
int getBiggestDigit(int num){

    int largestDigit = -1;
    int digitNum = 0;

    while (num>0){
        digitNum++;
        int lastDigit = num%10;
        if (lastDigit>largestDigit){
            largestDigit = lastDigit;
        }
        num /= 10;
    }
    
    if (digitNum!=4){
        return -1;
    }

    return largestDigit;
}



int main(){
    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int biggestDigit = getBiggestDigit(number);
    if (biggestDigit == -1) {
        cout << "The number is not a 4 digit number." << endl;
    } else {
        cout << "The biggest digit is: " << biggestDigit << endl;
    }

    return 0;
}