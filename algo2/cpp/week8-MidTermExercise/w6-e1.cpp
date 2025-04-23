/* Değerleri sırasıyla 1,2,3,4,5 olan dizi elamanlarını
void fonksiyonu ile ters çevir ve main fonksiyonunda
diziyi yazdıran programı kodlayınız.
*/

#include<iostream>
using namespace std;

void tersle(int dizi[], int length){
    
    for(int i=0; i<length/2; i++){

        int temp = dizi[i];
        dizi[i] = dizi[length-1-i];
        dizi[length-1-i] = temp;

    }
     
}


int main(){

    int ordek[] = {1,2,3,4,5};

    tersle(ordek, sizeof(ordek)/sizeof(ordek[0]));

    for (int i = 0; i < sizeof(ordek)/sizeof(ordek[0]); i++){
        cout << ordek[i] << " ";
    }cout << endl;
    



    return 0;
}