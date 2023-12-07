#include <stdio.h>

int main (void){
    int num1, num2, sum;

    printf("Informe o valor do numero: ");
    scanf("%d", &num1);
    printf("Informe o valor do numero: ");
    scanf("%d", &num2);

    sum = (num1*num1)+(num2*num2);
    printf("A soma do quadrado dos numeros e: %d", sum);
    return 0;
}
