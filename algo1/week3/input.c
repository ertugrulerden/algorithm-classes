#include <stdio.h>

int x,y;
void main(){
    printf("Bir sayi girin: ");
    scanf("%d", &x);
    printf("Girdiginiz deger %d'dir", x);

    printf("Bir deger daha giriniz: ");
    scanf("%d", &y);
    printf("Girdiginiz %d nin 2 kati %d'dir", y, 2*y);

}