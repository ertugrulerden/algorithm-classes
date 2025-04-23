#include <stdio.h>
#define N 10

int notlar[] = {25,80,100,35,45,56,93,18,75,50};
int sinirNot, sayac = 0;
int main(){
    printf("Sinir not giriniz: "); scanf("%d", &sinirNot);
    
    for (int i = 0; i<N; i++){
        // if (notlar[i]>=sinirNot){
        //     sayac++; printf("%d, ",notlar[i]);
        // }

        sayac += notlar[i]>=sinirNot;

    }
    printf("\n%d kişi %d notunu gecerek sinavi gecti, %d kişi kaldi\n", sayac, sinirNot, N-sayac);
}