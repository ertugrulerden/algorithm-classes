#include<stdio.h>

int main(){
    int nott; printf("Not: ");scanf("%d", &nott);

    if (nott >= 80 && nott <= 100)
        printf("AA\n");
    else if (nott >= 60)
        printf("BB\n");
    else if (nott >= 50)
        printf("CC\n");
    else if (nott >= 0)
        printf("FF\n");
    else
        printf("yanlis giris. 0-100 araliginda giriniz\n");

    return 0;
}