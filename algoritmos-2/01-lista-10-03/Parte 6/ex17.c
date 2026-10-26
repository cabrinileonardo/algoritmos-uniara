#include <stdio.h>

int contaCaracteres(char str[]) {

    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {

    char texto[100];
    int quantidade;

    printf("Digite uma string: ");
    scanf("%s", texto);

    quantidade = contaCaracteres(texto);

    printf("Quantidade de caracteres: %d\n", quantidade);

    return 0;
}