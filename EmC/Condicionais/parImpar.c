#include <stdio.h>

int main(void){
    int num;

    printf("Infome um numero inteiro: ");
    scanf("%d", &num);

    if(num%2 == 0 && num<0){
        printf("O numero e par e negativo");
    } else if (num%2 == 0 && num >= 0){
        printf("O numero e par e positivo");
    } else if (num % 2 != 0 && num<0 ){
        printf("O numero e impar e negativo");
    } else if (num % 2 != 0 && num >= 0){
        printf("O numero e impar e positivo");
    }
    
    return 0;
}
