#include <stdio.h>

int dizi[] = {8,2,3,2,6,3,5,8,2,7};

int main(){
    printf("Aranacak elemani giriniz: "); int x; scanf("%d", &x);

    int count = 0;
    for (int i = 0; i <10; i++){
        if (x==dizi[i]){
            printf("%d degeri dizinin %d indisli elemanidir\n", x,i); count++;
        }
    }
    printf("%d degerinden dizide %d tane var\n",x,count);

    return 0;
}