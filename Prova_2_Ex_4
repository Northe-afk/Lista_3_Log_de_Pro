#include <stdio.h>
#include <locale.h>

void acima_da_media(int array[8]) {
    int i;
    float soma = 0, media;

    // Imprime os números do array
    printf("Números no array:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", array[i]);
        soma += array[i];
    }

    // Calcula a média
    media = soma / 8;

    // Imprime a média
    printf("\n\nMédia: %.3f\n", media);

    // Imprime os números acima da média
    printf("\nNúmeros acima da média:\n");
    for(i = 0; i < 8; i++) {
        if(array[i] > media) {
            printf("%d\n", array[i]);
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int array[8] = {3, 4, 2, 6, 2, 9, 7, 8};

    acima_da_media(array);

    return 0;
}