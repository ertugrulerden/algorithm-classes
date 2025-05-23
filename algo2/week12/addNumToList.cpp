#include <iostream>
#include<list>
using namespace std;

void printList(const list<int> & myList){
    for (auto i=myList.begin(); i!=myList.end(); i++){
        cout << *i << " ";

    }cout << endl;
}


int main() {
    list<int> nums = {10,20,30,40};

    int num;
    while (true){
        cout << "Add int nums to list (0 to stop)" << endl;
        cin >> num;
        if (num==0){break;}
        
        auto itr = nums.begin();
        while (itr!=nums.end() && *itr<num){
            itr++;
        }
        nums.insert(itr, num);

    }

    printList(nums);


    return 0;
}
