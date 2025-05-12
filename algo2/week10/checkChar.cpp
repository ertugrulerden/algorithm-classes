#include <iostream>
#include <string>
using namespace std;

int main(){
    char character;
    cout << "Enter a character: "; cin >> character;
    character = toupper(character);

    char sesli[] = {'A', 'E', 'I', 'O', 'U'};
    bool isSesli = false;

    for(int i=0; i<5; i++){
        if(character == sesli[i]){
            isSesli = true;
            break;
        }
    }

    if ((character >= 'A' && character <= 'Z')){
        cout << character << " is a letter" << endl;
        if(isSesli){
            cout << character << " is a vowel (sesli)" << endl;
        } else {
            cout << character << " is a consonant (sessiz)" << endl;
        }
    } else {
        cout << character << " is not a letter" << endl;
    }
    
}