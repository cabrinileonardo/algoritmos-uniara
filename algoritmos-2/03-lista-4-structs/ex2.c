#include <stdio.h>
#include "pss.h"

typedef struct 
{
    char nome[40];
    double preco;
} produto;

int main () {
    produto produtos[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nProduto %d:\n", i + 1);

        input_s("Nome: ", produtos[i].nome, sizeof(produtos[i].nome));
        produtos[i].preco = input_lf("Preco: ");

    }

    printf("\nProdutos com preco menor que R$ 50,00:\n");

    for (int i = 0; i < 3; i++)
    {
        if (produtos[i].preco < 50.0) {
            printf("Nome: %s | Preco: %lf",produtos[i].nome,produtos[i].preco);
        }
    }
        
    return 0;
}