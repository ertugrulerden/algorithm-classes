#include<stdio.h>
#define N 10
// 5 elemanli bir diziyi kucukten buyuge siralayin

int dizi[] = {5, 8, 2, -1, 6, -2, 22, 52, 3, 0};
int temp;


int main(){

    for (int i = 0; i<N-1; i++){
        for (int j = i+1; j<N; j++){
            if (dizi[j] < dizi[i]){
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }

    for (int i = 0; i<N; i++){
        printf("%d\t",dizi[i]);
    }


    return 0;
}