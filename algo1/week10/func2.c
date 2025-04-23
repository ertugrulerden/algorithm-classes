#include<stdio.h>


int stringUzunluk(char *str){
    int uzunluk = 0;
    while(str[uzunluk] != '\0'){
        uzunluk++;
    }
    return uzunluk;
}

int main(){
    char st[20];
    printf("string giriniz: "); scanf("%s", st);
    printf("girdiginiz stringin uzunlugu: %d\n", stringUzunluk(st));

    return 0;
}

// 2. yol:
// while(*str!='\0') str++;