#include<stdio.h>
#define N 8

int faktoriyel(int sayi){
    if (sayi <= 1) return 1;

    int fak = 1;
    for (int i = sayi; i>1; i--){
        fak *= i;
    }
    return fak;
}

int main(){
    int toplam = 0;
    for (int i = 0; i<=N; i++){
        printf("%d! + ",i);
        toplam += faktoriyel(i);
    }
    printf("= %d", toplam);


    return 0;
}