#include <stdio.h>
#define SAYI 10

int tekler = 0, ciftler = 0;
int main() {
    
    for(int i=1; i<=SAYI; i++){
        (i % 2 == 0) ? (ciftler += i) : (tekler += i);
    }
    printf("tekToplam: %d \t ciftToplam: %d \t total: %d", tekler,ciftler, tekler+ciftler);   
    
    return 0;
}