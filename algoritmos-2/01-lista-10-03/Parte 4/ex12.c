#include <stdio.h>

void normalizaVetor(float vetor[], int tamanho) {

    float maior = vetor[0];

    // encontrar o maior
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = vetor[i] / maior;
    }
}

int main() {

    float vetor[5] = {10, 20, 30, 40, 50};

    normalizaVetor(vetor, 5);

    printf("Vetor normalizado:\n");

    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}