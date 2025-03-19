#include <stdio.h>
#define yildiz 5

int main() {
    for (int i=1; i<=yildiz; i++){
        for (int j=1; j<=i; j++)
            printf("* ");
        printf("\n");
    }


    return 0;
}