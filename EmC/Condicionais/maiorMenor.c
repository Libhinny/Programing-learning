#include <stdio.h>

int main(void){

    int num1, num2, num3, maior, menor;

    printf("informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("informe o segundo numero: ");
    scanf("%d", &num2);
    printf("informe o terceiro numero: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;

    if (num2 > maior){
        maior = num2;
    } 
    if (num3 > maior){
        maior = num3;
    } else if ( num2 < menor){
        menor = num2;
    } else {
        menor = num3;
    }

    printf("O maior numero e o menor sao, respectivamente: %d e %d", maior, menor);

    return 0;
}
