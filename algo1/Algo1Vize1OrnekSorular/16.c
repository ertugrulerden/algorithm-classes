#include<stdio.h>
int main(){
    int x = 1, y = 4, z = 7;
    if (x++ > y && y++ < z) z -= y;
    else if (++y > x) z += x;
    printf("x=%d, y=%d, z=%d\n",x,y,z);

    x = 4; y = 4;
    if(++x > y || ++y > x){
        x<<1; y*=x;
    } else {
        x--; x*=y;
    }
    printf("x=%d, y=%d", x,y);

    return 0;
}