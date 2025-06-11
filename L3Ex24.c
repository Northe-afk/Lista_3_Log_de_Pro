#include <stdio.h>
#include <stdlib.h>

void cria_matriz(int M, int N, int matriz[M][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = (rand() % 11) - 5; // Preenche com números aleatórios de 0 a 99
        }
    }
}

void mostra_matriz(int M, int N, int matriz[M][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int M, N;
    
    printf("Digite o numero de linhas (M): ");
    scanf("%d", &M);
    
    printf("Digite o numero de colunas (N): ");
    scanf("%d", &N);
    
    int matriz[M][N];
        
    cria_matriz(M, N, matriz);
    
    printf("Matriz gerada:\n");
    mostra_matriz(M, N, matriz);
    
    return 0;
}