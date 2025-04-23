// 5 elemanli 2 dizinin toplanarak 3. bir diziye yazildiği ve ekranda toplamlari seklinde gösterildiği program

#include <stdio.h>

int dizi1[] = {1,2,3,4,5};
int dizi2[] = {6,7,8,9,10};
int dizi3[5];

int main(){

    for (int arrayIndex = 0; arrayIndex < 5; arrayIndex++){
        dizi3[arrayIndex] = dizi1[arrayIndex] + dizi2[arrayIndex];
    }

    for (int arrayIndex = 0; arrayIndex < 5; arrayIndex++){
        printf("%d + %d = %d\n",dizi1[arrayIndex], dizi2[arrayIndex], dizi3[arrayIndex]);
    }

    return 0;
}