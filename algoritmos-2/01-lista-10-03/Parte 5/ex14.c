#include <stdio.h>
#include <ctype.h>

void paraMinusculo(char *c) {

    if (*c >= 'A' && *c <= 'Z') {
        *c = tolower(*c);
    }

}

int main() {

    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    paraMinusculo(&letra);

    printf("Letra em minusculo: %c\n", letra);

    return 0;
}