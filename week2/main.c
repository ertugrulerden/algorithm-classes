#include <stdio.h>

int a,b,c;
float d,e;

int main(){

    a = 10; b = 5;
    c = a + 2*b;
    printf("a = %d\nb = %d\nc = %d\n", a,b,c);

    e = 2.4; d = c + e*4;
    printf("d = %f\n\n", d);


    int uzunKenar = 10; int kisaKenar = 5;
    int dikdortgenAlani = uzunKenar*kisaKenar;
    int dikdortgenCevresi = 2*(uzunKenar + kisaKenar);

    printf("uzunKenar=%d kisaKenar=%d \nAlan=%d Cevre=%d\n\n", uzunKenar, kisaKenar, dikdortgenAlani, dikdortgenCevresi);


    
    
    


    return 0;
}