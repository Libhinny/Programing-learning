#include <stdio.h>

int main(void){
    int repC, repD;
    float perC, perD, total;

    printf("Quantos reprovaram na turma C: ");
    scanf("%i", &repC);
    printf("Quantos reprovaram na turma D: ");
    scanf("%i", &repD);

    perC = ((float)repC / 60) * 100;
    perD = ((float)repD / 20) * 100;

    total = ((float)(repC + repD)/80)*100;

    printf("A percentagem de reprovados na turma C foi de %f\n", perC);
    printf("A percentagem de reprovados na turma D foi de %f\n", perD);
    printf("A percentagem total de reprovados foi de %f\n", total);

    return 0;
}
