#include <stdio.h>

void desvioSimples(int vetor[], int tamanho) {

    float media = 0;
    float desvio;

    // calc a soma
    for (int i = 0; i < tamanho; i++) {
        media += vetor[i];
    }

    // calculr a média
    media = media / tamanho;

    printf("Media: %.2f\n", media);

    for (int i = 0; i < tamanho; i++) {
        desvio = vetor[i] - media;
        printf("Desvio do elemento %d: %.2f\n", vetor[i], desvio);
    }
}

int main() {

    int vetor[5] = {10, 20, 30, 40, 50};

    desvioSimples(vetor, 5);

    return 0;
}