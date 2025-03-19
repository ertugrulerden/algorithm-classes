#include<stdio.h>
#include<math.h>

int kare(int x){
    return x*x;
}

// 3 x küp + 5 x kare + 3 x + 2
float fonk(float x){
    return 3*pow(x,3) + 5*pow(x,2) + 3*x + 2;
}

int main(){
    printf("%d'in karesi: %d\n", 5, kare(5));

    for (float i = -1; i<1.1; i+=0.1){
        printf("f(%.1f)\t=\t%.3f\n",i, fonk(i));
    }

    return 0;
}