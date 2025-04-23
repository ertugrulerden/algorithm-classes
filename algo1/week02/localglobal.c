#include <stdio.h>


int i = 3;

int main(){

    printf("maindeki i = %d\n", i);

    {
        int i = 4;
        printf("block icindeki i = %d\n", i);
    }


    printf("yine maindeki i = %d\n", i);

    return 0;
}