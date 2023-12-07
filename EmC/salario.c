#include <stdio.h>

int main (void){
    float valorH, horas, salario; 

    printf("Informe o valor da hora de trabalho:\n");
    scanf("%f", &valorH);
    printf("Quantas horas de trabalhos neste mes?\n");
    scanf("%f", &horas);

    salario = valorH*horas;
    printf("Seu salario neste mes sera: %.2f", salario);
    
    return 0;
}
