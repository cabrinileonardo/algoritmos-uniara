#include <stdio.h>
#include "pss.h"

struct Aluno
{
    char nome[50];
    int idade;
    char curso[30];
};

int main() {
    struct Aluno aluno;

    input_s("Digite o nome: ", aluno.nome, sizeof(aluno.nome));
    aluno.idade = input_d("Digite a idade: ");
    input_s("Digite o curso: ", aluno.curso, sizeof(aluno.curso));

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome  : %s\n", aluno.nome);
    printf("Idade : %d\n", aluno.idade);
    printf("Curso : %s\n", aluno.curso);

    return 0;
}