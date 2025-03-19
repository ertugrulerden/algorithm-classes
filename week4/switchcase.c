#include <stdio.h>

int gun;
int main() {
    printf("Gün: "); scanf("%d",&gun);

    switch (gun){
        case 1: printf("pazartesi\n"); break;
        case 2: printf("sali\n"); break;
        case 3: printf("çarşamba\n"); break;
        case 4: printf("perşembe\n"); break;
        case 5: printf("cuma\n"); break;
        case 6: printf("cumartesi\n"); break;
        case 7: printf("pazar\n"); break;
        
        default: printf("Hata! [1-7] arasinda bir sayi girin.\n");
    }

    return 0;
}