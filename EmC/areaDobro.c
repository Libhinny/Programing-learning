#include <stdio.h>

int main (void){
    int lado, area, dobro;

    printf("Informe a medida do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado*lado;
    dobro = 2*area;

    printf("A area do quadrado e o seu dobro sao, respectivamente: %d e %d", area, dobro);

    return 0;
}
