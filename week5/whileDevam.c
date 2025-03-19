#include <stdio.h>

int x, toplam, i; float ortalama;
char devam;
int main() {
    i = 0; devam = 'e';
    while (devam == 'e' || devam == 'E'){
        i++;
        printf("%d. notu giriniz : ", i); scanf("%d", &x);
        toplam += x;
        printf("Devam mi (E/H)?"); fflush(stdin); scanf("%c", &devam);
    }
    ortalama = (float) toplam/i;
    printf("%d tane notun toplami: %d ortalamasi : %.2f", i, toplam, ortalama);

    return 0;
}