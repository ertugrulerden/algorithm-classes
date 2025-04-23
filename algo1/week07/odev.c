//10 elemanlı dizideki en buyuk ve en kucuk elemanı yaz

#include <stdio.h>

int buyuk, kucuk;
int dizi[] = {5,8,2,-1,6,12,15,20,0,3};
int main(){

    buyuk = kucuk = dizi[0];
    for(int i = 1; i <=10; i++ ){
        if (dizi[i]>buyuk)
            buyuk = dizi[i];
        else if (dizi[i]<kucuk)
            kucuk = dizi[i];
    }
    printf("Büyük: %d\tKüçük: %d",buyuk,kucuk);
}