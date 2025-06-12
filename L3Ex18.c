#include <stdio.h>
#include <locale.h>

void hoje(int data[3]) {
    printf("Hoje é %02d/%02d/%04d\n", data[0], data[1], data[2]);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int data[3] = {12, 07, 2012};

    hoje(data);

    return 0;
}