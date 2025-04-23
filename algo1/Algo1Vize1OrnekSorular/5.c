#include<stdio.h>


int main(){

    int a,b,c,d,x,y;
    a = 12; b = 5; a += b; b -= a;
    printf("%d %d\n",a,b);
    a = 4; b = 7; c = 3;
    printf("%d\n",a*b%3);
    x = 4; y = x % 2 ? x*2 : x+2;
    printf("y=%d\n",y);

    return 0;
}