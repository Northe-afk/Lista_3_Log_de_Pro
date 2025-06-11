#include <stdio.h>

void saudacao(char nome[20]){
    printf("Bom dia, %s!\n", nome);
}

int main(){
    char nome[20];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    saudacao(nome);

    return 0;
}