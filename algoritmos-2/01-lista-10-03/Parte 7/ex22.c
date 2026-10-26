#include <stdio.h>

void somaVetores(int v1[], int v2[], int resultado[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = v1[i] + v2[i];
    }

}

int main() {

    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5] = {6, 7, 8, 9, 10};
    int soma[5];

    somaVetores(v1, v2, soma, 5);

    printf("Vetor soma:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", soma[i]);
    }

    return 0;
}