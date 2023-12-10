#include <stdio.h>

int main(void){
    int num, quo, res; 
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    quo = num / 3;
    res = num % 3;

    printf("O quociente e resto da divisao do numero, sao respectivamente: %d e %d ", quo, res);

    return 0;
}
