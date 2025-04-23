#include<stdio.h>


int main(){

    int i = 1;

    do {

        if (i%2==1) printf("%d", i);
    } while(++i<= 10);

    return 0;
}