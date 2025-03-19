#include<stdio.h>
#include<string.h>

char isim1[10] = "Ali";
char *isim2;
char isim3[10];
int main(){

    printf("isim : %s", isim1);


    isim2 = "Fatma";
    printf("isim : %s", isim2);
    

    strcpy(isim3, "Ali");
    printf("isim : %s", isim3);



    return 0;
}