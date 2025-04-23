#include<stdio.h>
#define N 2

int A[N][N];
int B[N][N];
int C[N][N];
int main(){

    printf("1. Matrixi giriniz:\n");
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("A[%d][%d] = ",i,j); scanf("%d", &A[i][j]);
        }
    }
    printf("\n2. Matrixi giriniz: \n");
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("B[%d][%d] = ",i,j); scanf("%d", &B[i][j]);
        }
    }

    printf("\nToplam Matrix:\n");
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }



    

    

    return 0;
}