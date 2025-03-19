/*
Kontrol Cümleleri:
 Şart İfadeleri:
  if ve if-else Deyimleri:
*/

#include <stdio.h>

int x;
int main(){
    
    printf("[0-100] arasinda bir sayi giriniz: "); scanf("%d", &x);
    if (x<= 100 && x>=0){
        printf("Sayiniz: %d", x);
    } else {
        printf("Girdiginiz sayi [0-100] araliginda degildir!");
    }

    return 0;
}


