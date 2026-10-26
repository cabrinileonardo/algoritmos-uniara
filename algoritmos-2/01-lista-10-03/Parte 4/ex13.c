#include <stdio.h>

double segundoMaior(double vetor[], int tamanho) {

    double maior, segundoMaior;

    if (vetor[0] > vetor[1]) {
        maior = vetor[0];
        segundoMaior = vetor[1];
    } else {
        maior = vetor[1];
        segundoMaior = vetor[0];
    }

    for (int i = 2; i < tamanho; i++) {

        if (vetor[i] > maior) {
            segundoMaior = maior;
            maior = vetor[i];
        } 
        else if (vetor[i] > segundoMaior && vetor[i] != maior) {
            segundoMaior = vetor[i];
        }

    }

    return segundoMaior;
}

int main() {

    double vetor[6] = {10.5, 25.2, 7.8, 40.1, 32.6, 18.4};

    double resultado = segundoMaior(vetor, 6);

    printf("Segundo maior valor: %.2lf\n", resultado);

    return 0;
}
