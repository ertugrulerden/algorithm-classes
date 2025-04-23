#include<stdio.h>


int main(){

    int num = 10; num += 2; printf("num=%d ", num);
    while(--num>=5){
        printf("num=%d ", --num);
        num += 1;
    }

    return 0;
}