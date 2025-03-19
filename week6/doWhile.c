#include <stdio.h>

int toplam, i;
int main(){
    toplam = 0; i = 1;

    do {
        toplam+=i;
    } while(++i<=5);

    printf("Toplam: %d", toplam);

    return 0;
}