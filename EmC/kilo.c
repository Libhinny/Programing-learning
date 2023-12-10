#include <stdio.h>

int main(void){
    float kilo, conv;
    int dias;

    printf("Informe a quantidade de kilogramas do alimento: ");
    scanf("%f", &kilo);
    
    conv = kilo * 1000;
    dias = conv / 50;

    printf("Esse alimento durara %d dias", dias);

    return 0;
}
