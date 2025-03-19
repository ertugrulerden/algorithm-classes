/*
20 elemanli bir dizi için asagidaki bilgileri bulan programı yazın
toplam, ortalama, standart sapma
*/ 

#include <stdio.h>
#include <math.h>
int toplam;
float ort, standartSapma;
int dizi[] = {
    1,2,3,4,5,
    6,7,8,9,10,
    11,12,13,14,15,
    16,17,18,19,20
    };

int main(){

    for (int i = 0; i < 20; i++){
        toplam += dizi[i];
    }
    ort = (float) toplam / 20;
    
    for (int i = 0; i < 20; i++){
        standartSapma += pow(dizi[i] - ort, 2);
    }
    standartSapma = sqrt(standartSapma / 19);
    printf("Toplam: %d\nOrtalama: %.2f\nStandart Sapma: %.2f\n", toplam, ort, standartSapma);

    return 0;
}