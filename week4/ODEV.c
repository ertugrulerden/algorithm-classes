// Kullanıcının gireceği 2 sayıyı yine kullanıcının gireceği 4 işlemden birini yaptırın. + - * /.

#include<stdio.h>

float x,y;
char islem;
int main(){
    printf("islemi giriniz: ");scanf("%f %c %f", &x, &islem, &y);

    switch (islem)
    {
    case '+': printf("%.2f %c %f = %.2f\n", x, islem, y, (float) x+y); break;
    case '-': printf("%f %c %f = %.2f\n", x, islem, y, (float) x-y); break;
    case '*': printf("%f %c %f = %.2f\n", x, islem, y, (float) x*y); break;
    case '/': printf("%f %c %f = %.2f\n", x, islem, y, (float) x/y); break;
    
    default: printf("hata.\n");
    }



    return 0;
}