#include<stdio.h>


int main(){

    int a = 5, b = 7, c = 0;
    c = (a++ * 2) + (--b);
    a += c % 3;
     printf("a=%d, b=%d, c=%d\n", a,b,c);
     int x = 2, y = 8;
     switch (x+y)
     {
     case 10: x += 2;
     case 8: y -= 3; break;
     case 6: x -= 1;
     
     default: x+= 5;
     }

    printf("x=%d, y=%d\n",x,y);

    return 0;
}