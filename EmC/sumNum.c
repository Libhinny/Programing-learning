#include <stdio.h>

int main (void){
    int num1, num2, sum;

    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o valor do segundo numero: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Resultado da soma: %d", sum);

    return 0;
}
