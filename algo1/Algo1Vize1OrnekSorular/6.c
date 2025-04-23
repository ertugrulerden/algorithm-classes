#include<stdio.h>


int main(){

    int num = 9; num<<=2;
    if(num%3==0 && num%2==0){
        printf("%d çift ve 3'e bölünebilir\n", num++);
    }
    else{
        printf("uymuyor\n");
    }
    printf("en sonki num=%d",++num);

    return 0;
}