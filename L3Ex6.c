#include<stdio.h>
#include<math.h>

int main() {
    int numeros[8] = {0, 1, 4, 9, 16, 25, 36, 49};
    float raizes[8];
    int i;

    for( i = 0; i < 8; i++) {
        raizes[i] = sqrt(numeros[i]);
    }

    printf("Numeros originais:\n");
    for( i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nRaizes quadradas:\n");
    for( i = 0; i < 8; i++) {
        printf("%.f ", raizes[i]);
    }

    return 0;
}