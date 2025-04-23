// Dışarıdan girilen 2 sayıdan ilkinin diğerinin 2 katından fazla olup olmadığını söyleyen programı yazınız.

#include<stdio.h>

int x,y;
int main(){

    printf("1. Sayiyi giriniz: "); scanf("%d", &x);
    printf("2. Sayiyi giriniz: "); scanf("%d", &y);

    //       y*2 = y<<1 => if(x > y<<1)
    if ( x > y<<1){
        printf("%d sayisi %d sayisinin 2 katindan fazladir.\n", x, y);
    } else {
        printf("%d sayisi %d sayisinin 2 katindan fazla degildir.\n", x, y);
    }


    return 0;
}
