#include<stdio.h>

int power(int taban, int us){
    int sonuc = 1;
    for (int i = 0; i<us; i++){
        sonuc *= taban;
    }
    return sonuc;
}


int main(){

    printf("%d üssü %d = %d", 2,3, power(2,3));

    return 0;
}