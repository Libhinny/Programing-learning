#include <stdio.h>

int main(void){
    int id;

    printf("Informe a idade: ");
    scanf("%d", &id);

    if (id>= 5 && id<=7){
        printf("Ele esta na categoria infantil");
    }
    if (id >= 8 && id<=10){
        printf("Categoria infantil B");
    } else if (id >= 11 && id <= 13){
        printf("Categoria juvenil A");
    } else if (id >= 14 && id <= 17){
        printf("Categoria juvenil B ");
    } else if (id>= 18){
        printf("Categoria adulto");
    } else {
        printf("Nao se encaixa em nenhuma categoria");
    }

    return 0;
}
