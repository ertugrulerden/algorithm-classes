#include<stdio.h>


int main(){

    int i,j, sum = 0;
    for (i=0; i <5; i++){
        sum += i%2 ? i : -j;
    }
    printf("sum=%d",sum);

    return 0;
}