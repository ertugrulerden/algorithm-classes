// 1 ile 5 arasinda girilen sayi kadar ekrana yildiz bastıran programı
// switch-case kullanarak ve aşağıdaki kurallara uyarak yazınız
// 1- her bir case'de sadece 1 tane printf kullanılabilir
// 2- her printf'in içinde sadece 1 tane yıldız karakteri olabilir
#include<stdio.h>
int n;
int main(){
    printf("[1-5] arasinda sayi girin: ");scanf("%d",&n);
    switch (n)
    {
        case 5: printf("*");
        case 4: printf("*");
        case 3: printf("*");
        case 2: printf("*");
        case 1: printf("*\n"); break;
        
        default: printf("Hata! 1-5 arasi sayi girin.\n");
    }
    return 0;
}