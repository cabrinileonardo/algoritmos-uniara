#include <stdio.h>
#include "pss.h"

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    Data nascimento;
} Pessoa;

int main() {
    Pessoa p;

    input_s("Nome: ", p.nome, sizeof(p.nome));
    p.nascimento.dia = input_d("Dia: ");
    p.nascimento.mes = input_d("Mes: ");
    p.nascimento.ano = input_d("Ano: ");

    printf("\n%s nasceu em %d/%d/%d\n",
           p.nome,
           p.nascimento.dia,
           p.nascimento.mes,
           p.nascimento.ano);

    return 0;
}