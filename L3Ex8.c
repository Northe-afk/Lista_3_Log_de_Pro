#include <stdio.h>
#define MAX 20
int main(){
    int numeros[MAX] = {3, -9, -6, 0, 12, 0, 15, -2, 100, 14};
    int positivos[MAX], negativos[MAX];
    int i, j = 0, k = 0, tam = 10;

    for(i = 0; i < tam; i++){
        if (numeros[i] > 0){
            positivos[j++] = numeros[i];
        } else if (numeros[i] < 0) {
            negativos[k++] = numeros[i];
        }
    }

    printf("Positivos: ");
    for(i = 0; i < j; i++){
        printf("%d ", positivos[i]);
    }
    printf("\nNegativos: ");
    for(i = 0; i < k; i++){
        printf("%d ", negativos[i]);
    }
    printf("\n");

    return 0;
}