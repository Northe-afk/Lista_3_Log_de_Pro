#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeros[8];
    int soma = 0;
    float media;
    int i;

    printf("Digite 8 númers inteiros:\n");
    for (i = 0; i < 8; i++) {
       scanf("%d", &numeros[i]);
       soma += numeros[i];
    }

    media = soma / 8.0;

    printf("Media: %.2f\n", media);
    printf("Números acima da média:\n");
    for (i = 0; i < 8; i++) {
        if (numeros[i] > media) {
            printf("%d ", numeros[i]);
        }
    }
    return 0;
}