#include <stdio.h>

int main (void){
    float medida, conv;

    printf("Informe o valor em metros: ");
    scanf("%f", &medida);

    conv = medida*100;
    printf("O valor em centimetros e: %.2f", conv);

    return 0;
}
