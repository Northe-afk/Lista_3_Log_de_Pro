#include <stdio.h>
#include <math.h>

int main() {
    int array[8] = {0, 1, 4, 9, 15, 25, 36, 40};
    int raiz_floor[8] = {0};
    int raiz_ceil[8] = {0};
    double raiz = 0.0;
    int i = 0;

    for (i = 0; i < 8; i++) {
        raiz = sqrt(array[i]);
        raiz_floor[i] = (int)floor(raiz);
        raiz_ceil[i] = (int)ceil(raiz);
    }

    printf("Original:     ");
    for (i = 0; i < 8; i++) printf("%d ", array[i]);
    printf("\nRaiz floor:   ");
    for (i = 0; i < 8; i++) printf("%d ", raiz_floor[i]);
    printf("\nRaiz ceil:    ");
    for (i = 0; i < 8; i++) printf("%d ", raiz_ceil[i]);
    printf("\n");

    return 0;
}
/*Floor arredonda pra baixo e ceil arredonda pra cima*/