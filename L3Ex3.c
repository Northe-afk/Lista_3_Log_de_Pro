#include <stdio.h>

int main(){
    char palavras[7][20] = {"Rubens", "Felipe", "Ayrton", "Nelson", "Gabriel", "Emerson", "Jose Carlos"};
    int i = 0;

    for (i = 0; i < 7; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
