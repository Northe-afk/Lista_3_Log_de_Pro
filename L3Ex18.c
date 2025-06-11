#include <stdio.h>
#include <locale.h>

void hoje(int dia, int mes, int ano) {
    printf("Hoje é %02d/%02d/%04d\n", dia, mes, ano);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int dia = 12, mes = 07, ano = 2012;

    hoje( dia,  mes,  ano);




    return 0;
}