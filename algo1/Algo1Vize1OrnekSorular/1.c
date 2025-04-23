#include<stdio.h>


int main(){

    int x = 9; x++; printf("%d\n", ++x);
    int y = 3; x -= y; printf("%d %d\n", x,y); 
    y+=x++; printf("%d\n", (x+y)%3);

    x = 2; y = 4; int z = 6;
    int result = (x+y) * z / 2 * 3;
    printf("%d\n", result);

    return 0;
}