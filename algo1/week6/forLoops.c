#include<stdio.h>
#define N 5

int toplam;
int main(){
    int i = 0;
    for ( ; ++i <= N; ){
        printf("%d\t", i);
    }
    printf("\n");

    for (int i = 1; i<=N; i++){
        toplam += i;
    }

    printf("Toplam : %d\n", toplam);

    for(int i=1, j=9; i<=j; i++,j--){
        printf("i: %d \tj: %d\n", i, j);
    }

    for(int i = 1; i<=255; i++){
        if(i%16) printf("%c ", i); // = if(i%16!=0) // 1
        else printf("\n%c", i);                     // 0
    }

    return 0;
}