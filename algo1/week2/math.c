#include <stdio.h>
#include <math.h>

int a,b = 5;
float d = 5.5, e;


int main(){

    a = 2;
    a = pow(2,3)*3 + a; b++;
    
    printf("a = %i \t b = %i \n", a, b+2);
    
    e = d*a; d -= 1;
    printf("e = %.2f \t d = %.3f", e,d);

    return 0;
}



