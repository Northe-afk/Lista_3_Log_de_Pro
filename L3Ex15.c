#include <stdio.h>
#include <stdlib.h>


int main(){
    int linhas, colunas;
    int matriz[linhas][colunas];
    int i, j;
    
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);
    
    srand(1); //seed = 1

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 11; //Garantir que o resultado sera entre 0 e 10
        }
        
     }
    
    printf("Matriz gerada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        
        }
        printf(" \n");
    }


    return 0;
}


