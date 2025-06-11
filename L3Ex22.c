#include <stdio.h>

void mostra_array(int array[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d\n ", array[i]);
    }
}
int main() {
    int i;
    int N;
    int numeros[N];

    printf("Quantos números você quer inserir? ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    mostra_array(numeros,  N);

    return 0;
}

/*Igual a 21*/