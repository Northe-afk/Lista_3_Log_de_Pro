#include <stdio.h>

int main(){
    double numeros[5] = {12.3, 3.14149, 39.7, 41.9, 5.2};
    int i = 0;

    for (i = 0; i < 5; i++) {
        printf("%g\n", numeros[i]);
    }

    return 0;
}

