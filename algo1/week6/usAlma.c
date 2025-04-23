#include<stdio.h>

int taban, us, sonuc;
int main(){
    taban = 2; us = 3; sonuc=1;
    
    if (taban==0) printf("Sonuc = 0\n");
    else
        for (int i=1; i<=us; i++){
            sonuc *= taban;
        }
        printf("%d'nin %d. kuvveti = %d\n", taban, us, sonuc);

    return 0;
}