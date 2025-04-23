#include<stdio.h>

int x,y;
int main(){
    printf("x=");scanf("%d",&x);
    printf("y=");scanf("%d",&y);
    x++; y = x+y;

    if (x<0 && y>x){
        printf("x = %d\n", x);
    } else {
        printf("y = %d\n", y);
    }


    return 0;
}