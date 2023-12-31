#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    printf("Digite o valor da sua idade:");
    scanf("%d", &idade);

    double salario;
    printf("Digite o valor do seu salario:");
    scanf("%lf", &salario);

    double altura;
    printf("Digite o valor da sua altura:");
    scanf("%lf", &altura);

    printf("\n###### RESULTADO #######\n\nIDADE: %d\nSALARIO: %.2lf\nALTURA: %lf\n", idade, salario, altura);




    return 0;
}
