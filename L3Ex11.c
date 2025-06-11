#include <stdio.h>

int main() {
    int array[20] = {1, 3, 5, 7, 2, 3, 1, 4, 6, 8, 2, 9, 5, 7, 3, 1, 2, 4, 6, 8};
    int contagem[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //Para contar de 0 a 9
    int i;

    for (i = 0; i < 20; i++) {
        contagem[array[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d aparece %d vezes\n", i, contagem[i]);
    
    }



    return 0;
}