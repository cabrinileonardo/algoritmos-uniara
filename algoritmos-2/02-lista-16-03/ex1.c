#include <stdio.h>

int meuStrlen(char text[]) {
    int i = 0;

    while (text[i] != '\0') {
        i++;
    }

    return i;
}

int main() {

    char texto[100];
    int tamanho;

    printf("Digite alguma coisa: ");
    fgets(texto, 100, stdin);

    tamanho = meuStrlen(texto);

    printf("Tamanho da string: %d\n", tamanho);

    return 0;
}