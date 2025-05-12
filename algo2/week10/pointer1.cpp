#include <iostream>
#include <string>
using namespace std;



int main(){
    string lecture = "Algorithm";
    string &newLecture = lecture; //reference of lecture

    cout << "Lecture:\t" << lecture << endl;
    cout << "New Lecture:\t" << newLecture << endl;
    
    cout << "Lecture address:\t" << &lecture << endl;

    string *ptr = &lecture;
    cout << "Pointer address:\t" << ptr << endl;

    *ptr = "Data Structure";
    cout << "Lecture:\t" << lecture << endl;
    cout << "Pointer:\t" << *ptr << endl << endl;
    // both changed cuz they share the same memory address


    int val = 10;
    int *pVal = &val;
    int **ppVal = &pVal;

    cout << "val:\t" << val << endl;
    cout << "*pVal:\t" << *pVal << endl;
    cout << "**ppVal:" << **ppVal << endl << endl;

    **ppVal = 43;
    cout << "val:\t" << val << endl;
    cout << "*pVal:\t" << *pVal << endl;
    cout << "**ppVal:" << **ppVal << endl << endl;
    // they all changed to 43 cuz they all refer to the same memory address

    int arr[] = {10, 20, 30, 40, 50};
    int *pArr = arr; //it refers to the first element of the array

    for (int i = 0; i < 5; i++){
        cout << *(pArr+i) << " : " << (pArr+i) << endl; // *(pArr+i) is the value of the element, (pArr+i) is the address of the element
    } cout << endl;


    


    

    return 0;

}