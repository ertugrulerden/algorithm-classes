#include<stdio.h>
#include<math.h>

int n=2, m=2, result;
int main(){

    for (int i = 1; i<=n; i++){
        for (int j=1; j<=m; j++){
            result += pow(i+j, 2);
            printf("result: %d\n", result);
        }
    }

    return 0;
}