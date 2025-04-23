#include <stdio.h>
int num=10; int num2=12;
int main(){
    num=( (++num2+2)>num2 )?num-num2:num2+2;
    num--; num2++;
    printf("num=%d num2=%d",num,num2-2);
    return 0;

}