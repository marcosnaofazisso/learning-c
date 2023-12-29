#include <stdio.h>

int main() {

    int a,b;
    double resultado;

    a = 5;
    b = 2;
    resultado = a/b; //resultado sem correção (incorreto)
    printf("Resultado incorreto: %lf\n", resultado);

    resultado = (double) a/b; //resultado correto
    printf("Resultado correto: %lf\n", resultado);

    return 0;

}
