#include <stdio.h>
#include <math.h>

#define MAX 100  // tamanho máximo da matriz

// Função para criar a matriz (entrada dos dados)
void cria_matriz(int linhas, int colunas, float matriz[MAX][MAX]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

// Função para mostrar a matriz
void mostra_matriz(int linhas, int colunas, float matriz[MAX][MAX]) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para multiplicar a matriz por um escalar
void mult_por_escalar(int linhas, int colunas, float A[MAX][MAX], float escalar, float Resultado[MAX][MAX]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            Resultado[i][j] = escalar * A[i][j];
        }
    }
}

// Função principal para testar
int main() {
    int linhas, colunas;
    float escalar;
    float A[MAX][MAX], Resultado[MAX][MAX];

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("\n--- Criando matriz A ---\n");
    cria_matriz(linhas, colunas, A);

    printf("Digite o escalar para multiplicar: ");
    scanf("%f", &escalar);

    mult_por_escalar(linhas, colunas, A, escalar, Resultado);

    printf("\n--- Matriz A ---");
    mostra_matriz(linhas, colunas, A);

    printf("\n--- Matriz Resultado (A * %.2f) ---", escalar);
    mostra_matriz(linhas, colunas, Resultado);

    return 0;
}