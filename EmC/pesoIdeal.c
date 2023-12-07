#include <stdio.h>

int main (void){
    float altura, pesoideal;

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    pesoideal = (72.7*altura) - 58;

    printf("Seu peso ideal deve ser: %.2f", pesoideal);

    return 0;
}
