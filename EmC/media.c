#include <stdio.h>

int main (void){
    float nota1, nota2, nota3, nota4, med;

    printf("Informe o valor da nota 1: ");
    scanf("%f", &nota1);
    printf("Informe o valor da nota 2: ");
    scanf("%f", &nota2);
    printf("Informe o valor da nota 3: ");
    scanf("%f", &nota3);
    printf("Informe o valor da nota 4: ");
    scanf("%f", &nota4);

    med= (nota1+nota2+nota3+nota4)/4;
    printf("Sua media e: %.2f", med);

    return 0;
}
