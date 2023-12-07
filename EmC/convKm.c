#include <stdio.h>

int main (void){
    float milhas, conv;
    printf("Informe o valor das milhas: ");
    scanf("%f", &milhas);

    conv = milhas*0.6214;
    printf("A conversao para km: %.4f km", conv);

    return 0;
}
