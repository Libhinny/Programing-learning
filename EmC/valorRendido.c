#include <stdio.h>

int main (void){
    float deposito, valorRendido;

    printf("Informe o valor depositado: ");
    scanf("%f", &deposito);

    valorRendido = deposito + (deposito*0.05);

    printf("O valor na poupanca, neste mes, sera: %.2f", valorRendido);
    return 0;
}
