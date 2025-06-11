#include <stdio.h>

#define MAX 10


int main(){
    int numeros[MAX] = {5, 3, 7, 8, 2, 14, 7};
    int tam = 7;
    int maior, menor;
    int i;

    menor = numeros[0];
    maior = numeros[0];
    for(i = 0; i < tam; i++){
        printf("%d \n", numeros[i]);
        if (numeros[i] > maior){
            maior = numeros[i];
        }
        if (numeros[i] < menor){
            menor = numeros[i];
        }
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);



    return 0;
}

