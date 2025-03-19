#include<stdio.h>

int main(){
    
    // dizi elemanları bellekte ardışıl olarak yer alır
    int ogrenci[20];
    int A[] = {6, 15, 2, 5, -1};
    A[3] = 20; // 5, 20 oldu
    
    int a[5];
    /*
    Bellek pointerAdres
    a[0]    *a
    a[1]    *(a+1)
    a[2]    *(a+2)
    a[3]    *(a+3)
    a[4]    *(a+4)
    */

    int dizi[5] = {8,21,-3,0,7};

    printf("Dizi elemanlari:\n");
    for(int i = 0; i<5; i++){
        printf("%d%c ", dizi[i], (i==4 ? ' ' : ','));
    }

    printf("\nTersten:\n");
    for (int i = 4; i>=0; i--){
        printf("%d%c ", dizi[i], (i==0 ? ' ' : ','));
    }
    
    printf("\n\n5 elemanli dizinin ortalamasi:\n");

    int elemanlar[5]; int toplam = 0; 
    for (int i = 0; i<5; i++){
        printf("%d. elemani giriniz: ",i+1); scanf("%d", &elemanlar[i]);
        toplam += elemanlar[i];
    }

    printf("\nElemanlar:\n");
    for (int i = 0; i < 5; i++){
        printf("%d, ",elemanlar[i]);
    }
    printf("\nToplam: %d\nOrtalama: %.2f\n", toplam, toplam/5.0);
    
    




    return 0;
}