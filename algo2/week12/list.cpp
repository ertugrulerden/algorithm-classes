#include<iostream>
#include<list>
using namespace std;

void printList(const list<int> & myList){
    for (auto i=myList.begin(); i!=myList.end(); i++){
        cout << *i << " ";

    }cout << endl;
}

int main(){

    list<int> numsList;

    int num;
    cout << "Enter int nums to list (0 to stop)"<<endl;
    while (true){
        cout << "Enter a num: "; cin >> num;
        if (num==0){break;}
        // add to front if even, to back if odd:
        if (num%2==0){
            numsList.push_front(num); 
        } else {
            numsList.push_back(num); 
        }
    }

    printList(numsList);


    return 0;
}