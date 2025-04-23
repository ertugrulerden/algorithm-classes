#include <stdio.h>

int toplam, faktoriyelSonuc;
#define N 7

int main() {
    toplam = 0;
    
    for (int j = N; j>=0; j--){
        faktoriyelSonuc = 1;
        for(int i = 1; i<=j; i++){
            faktoriyelSonuc*=i;
        }
        printf("%d! = %d\t", j, faktoriyelSonuc);
        toplam+=faktoriyelSonuc;
    }

    printf("\nToplam Sonuç: %d", toplam);
    
    return 0;
}