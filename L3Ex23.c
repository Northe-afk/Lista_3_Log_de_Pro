#include <stdio.h>

void mostra_matriz(int M, int N, int matriz[M][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int M, N;
    int i;
    int j;

    printf("Digite o numero de linhas (M): ");
    scanf("%d", &M);

    printf("Digite o numero de colunas (N): ");
    scanf("%d", &N);

    int matriz[M][N];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    }


    mostra_matriz(M, N, matriz);



    return 0;
}