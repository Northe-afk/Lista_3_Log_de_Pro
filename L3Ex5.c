#include <stdio.h>
#include <math.h>

int main(){
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float  quadrados[10];
    int i = 0;

    for (i = 0; i < 10; i++) {
        quadrados[i] = pow(numeros[i], 2);
    }

    printf("Numeros originais:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nQuadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.f ", quadrados[i]);
    }
    return 0;
}
