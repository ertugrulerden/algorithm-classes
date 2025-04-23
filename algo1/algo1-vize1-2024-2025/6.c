#include<stdio.h>
#define M 5
int main(){
    int x = 5, y = 3, z = 0;
    for (int i = 0; i<M; i++){
        z += ((2*x-y) % ++y) >= 1;
        y = ++x;
        printf("x=%d, y=%d\n", x++, y);
    }
    printf("x=%d, y=%d\n",x,y-1);
}