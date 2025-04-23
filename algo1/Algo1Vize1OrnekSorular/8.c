#include<stdio.h>


int main(){

    int x = 1, y = 4;
    while (y>0){
        x += y;
        y -= 2;
    }
    printf("x=%d y=%d\n",x,y);
    int a = 12, b = 5;
    a-=b; b+=a*2;
    printf("a=%d b=%d",a,b);

    return 0;
}