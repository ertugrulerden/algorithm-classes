#include<stdio.h>

int kactTaneCharVar(char *str, char karakter){
    int sayi = 0;
    for (int i = 0; str[i]!='\0'; i++){
        if (str[i]==karakter) sayi++;
    }
    return sayi;
}

int main(){

    char st[30]; char c;

    printf("Stringi giriniz: "); scanf("%s", st);
    printf("Karakteri giriniz: "); scanf("%c", &c);

    printf("%d tane var\n", kactTaneCharVar(st,c));

    return 0;
}