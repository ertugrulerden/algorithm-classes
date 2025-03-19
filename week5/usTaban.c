#include <stdio.h>

int i, us, taban, x;
int main() {
    taban = 2; us = 3;
    i = 0; x = 1;

    while (++i<=us){
        x *= taban;
    }
    printf("%d'nin %d. kuvveti : %d", taban, us, x);

    return 0;
}