#include<stdio.h>
#include<string.h>

char isimSoyisim[25], isim[10];
char *soyisim = " Kaya";


int main(){
    printf("isim giriniz: "); scanf("%s", isim);

    strcpy(isimSoyisim, isim);
    printf("%s\n", isimSoyisim);
    
    strcat(isimSoyisim, soyisim);
    printf("isimSoyisim: %s\n", isimSoyisim);


    return 0;
}