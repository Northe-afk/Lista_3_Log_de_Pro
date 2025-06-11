#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int soma_linha, soma_coluna;



    printf("Matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Soma das lihas
    for (i = 0; i < 3; i++) {
        soma_linha = 0;
        for (j = 0; j < 3; j++) {
            soma_linha += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i + 1, soma_linha);
    }

    //Soma das colunas
   for (j = 0; j < 3; j++) {
        soma_coluna = 0;
        for (i = 0; i < 3; i++) {
            soma_coluna += matriz[i][j];
        }
        printf("Soma da Coluna %d: %d\n", j + 1, soma_coluna);
    }


    return 0;
}