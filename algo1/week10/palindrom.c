#include<stdio.h>
#include<string.h>

char isim[10];
int main(){

    strcpy(isim, "aaba");
    printf("isim : %s\n", isim);

    for (int i = 0; isim[i]!='\0'; i++){
        printf("%c ", isim[i]);
    }
    printf("\n");

    printf("uzunluk = %lu\n", strlen(isim));

    for (int i = 0; i<strlen(isim); i++){
        printf("%c - ", isim[i]);
    }
    printf("\n");
    
    
    
    for (int i = 0; i < strlen(isim) / 2; i++) {
        if (isim[i] != isim[strlen(isim) - i - 1]) {
            printf("'%s' palindrom değil!", isim);
            return 0;
        }
    }
    printf("'%s' palindromdur", isim);


    

    return 0;
}