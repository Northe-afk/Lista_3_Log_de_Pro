#include <stdio.h>

void cria_matriz(int linhas, int colunas, float matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j); 
            scanf("%f", &matriz[i][j]);
        }
    }
}

void mostra_matriz(int linhas, int colunas, float matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void soma_matrizes(int linhas, int colunas, float A[linhas][colunas], float B[linhas][colunas], float Soma[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            Soma[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    float A[linhas][colunas], B[linhas][colunas], Soma[linhas][colunas];

    printf("Preenchimento da matriz A:\n");
    cria_matriz(linhas, colunas, A);

    printf("Preenchimento da matriz B:\n");
    cria_matriz(linhas, colunas, B);

    soma_matrizes(linhas, colunas, A, B, Soma);

    printf("Matriz A:\n");
    mostra_matriz(linhas, colunas, A);

    printf("Matriz B:\n");
    mostra_matriz(linhas, colunas, B);

    printf("Matriz Soma:\n");
    mostra_matriz(linhas, colunas, Soma);

    return 0;
}