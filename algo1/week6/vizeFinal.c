#include<stdio.h>

char devam; int nott, vize, final;
int main(){

    do{
        printf("Vize = "); scanf("%d", &vize);
        printf("Final = "); scanf("%d", &final);

        nott = (float) vize*0.4 + final*0.6;
        printf("Notunuz: %d\n", nott);
        printf("Devam mi? (E/H)?: ");
        fflush(stdin);
        devam = getchar();
    } while(devam == 'e' || devam == 'E');

    return 0;
}