#include <stdio.h>

int main (void){
    float salario, ajuste;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    ajuste = salario + (salario*0.15);

    printf("Seu salario, com o ajuste, ficara: %.2f", ajuste);

    return 0;
}
