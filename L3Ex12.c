#include <stdio.h>
#define MAX 20


void mostra_vetor(int vetor[MAX], int tam){
	int i;
	
	for(i = 0; i < tam; i ++){
		printf("%2d ", vetor[i]);
	}
	printf("\n\n");
}

void copia_vetor(int vetor_original[MAX], int vetor_copia[MAX], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		vetor_copia[i] = vetor_original[i];
	}
}

int main(){
	int vetor[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int i, tam = 13;
	int atual, proximo, temp;
	int vetor_copia[MAX];

	
	for(i = 0; i < tam; i ++){
		vetor_copia[(i + 1)%tam] = vetor[i];
	}
	
	/*
	for(i = 0; i < tam - 1; i++){
		vetor_copia[i + 1] = vetor[i];
	}
	vetor_copia[0] = vetor[i];
	*/
	
	mostra_vetor(vetor, tam);
	mostra_vetor(vetor_copia, tam);
	
	
	
	return 0;
}
