#include <stdio.h>
#include <stdlib.h>

int main() {

    int matrix3X3[] = {
        {5,8,0},
        {9,-1,3},
        {15,7,24}
    };

    int birimMatrix2X2[] = {
        {1,0},
        {0,1}
    };

    int birimMatrix3X3[] = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    int AltUcgenMatrix3X3[] = {
        {1,0,0},
        {1,1,0},
        {1,1,1}
    };

    
    int toplancakMatrix1[] = {
        {2,3},
        {-1,5}
    };
    int toplancakMatrix2[] = {
        {15,8},
        {4,6}
    };
    int toplamMatrix[] = {
        {17,11},
        {3,11}
    };

    int carpilacakMatrix1[] = {
        {7,3},
        {2,1}
    };
    int carpilacakMatrix2[] = {
        {4,8},
        {9,10}
    };
    int carpimMatrix[] = {
        {7*4+3*9, 7*8+3*10},
        {2*4+1*9, 2*8+1*10}
    };

    int birimMatrixIleCarpilacakMatrix1[] = {
        {7,3},
        {2,1}
    };
    int birimMatrix[] = {
        {1,0},
        {0,1}
    };
    int birimMatrixCarpimSonucu[] = { // bu matrix carpilacakMatrix1 ile aynidir.
        {7*1+3*0, 7*0+3*1}, // 7,3
        {2*1+1*0, 2*0+1*1} // 2,1
    };
    
    
    return 0;
}

