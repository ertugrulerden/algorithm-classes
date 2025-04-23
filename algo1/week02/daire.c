#include <stdio.h>

#define PI 3.14


float alan, cevre;
int yaricap = 5;

int main(){

    alan = PI * (yaricap * yaricap);
    cevre = 2 * PI * yaricap;

    printf("Alan: %f \t Cevre: %f", alan, cevre);


    return 0;
}