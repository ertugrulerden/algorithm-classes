#include<stdio.h>

int sayi;
int main(){

    printf("Bir sayi giriniz: "); scanf("%d", &sayi);
    if (sayi%2 == 0){
        printf("Girdiginiz sayi (%d) : CIFT sayidir.\n", sayi);
    } else {
        printf("Girdiginiz sayi (%d) : TEK sayidir.\n", sayi);
    }


    return 0;
}