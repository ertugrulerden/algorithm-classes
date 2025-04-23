#include<stdio.h>
#define N 3

int A[N][N];
int main(){

    /*
    birim 3x3 matrix oluşturma:
    1 0 0 
    0 1 0 
    0 0 1 
    */
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (i==j) A[i][j] = 1;
            else A[i][j] = 0;
        }
    }

    for (int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    /*
    birim 3x3 alt üçgen matrix oluşturma:
    1 0 0 
    1 1 0 
    1 1 1 
    */
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            if (i>=j) A[i][j] = 1;
            else A[i][j] = 0;
        }
    }

    for (int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    

    return 0;
}