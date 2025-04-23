#include <stdio.h>
#define N 8

int toplam, faktoriyel;
int main() {
    toplam = 0;
    faktoriyel = 1;

    if (N<0) { printf("pozitif sayi girin.\n"); return 0;}

    printf("0! = 1\t\t"); toplam++;
    for (int i = 1; i <= N; i++) {
        faktoriyel *= i;
        toplam += faktoriyel;
        printf("%d! = %d\t", i, faktoriyel);
    }
    printf("\nToplam: %d\n", toplam);

    return 0;
}
