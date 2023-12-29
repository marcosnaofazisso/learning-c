#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura, peso;
    char genero;
    char nome[50];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    peso = 70;
    genero = 'F';

    strcpy(nome, "Maria Silva");
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);
    printf("\n\n\n");

    printf("A funcionaria %s, do sexo %c, recebe R$ %.2lf por mes. Tem %d anos, %.2lfm de altura e pesa %.1lfkg.",
           nome, genero, salario, idade, altura, peso);

    return 0;
}
