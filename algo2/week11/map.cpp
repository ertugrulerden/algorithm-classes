#include <iostream>
#include <map>
#include <list>
using namespace std;

int main(){
    list<int> myList = {9,2,7,4,5,1,6,8,3};
    myList.sort(greater<int>());

    for(const auto i : myList) {
        cout << i << endl;
    }

    return 0;
}
