#include <stdio.h>

int main(void){
    int uni, dez, cent, milhar;

    uni = 1738 % 10;
    dez = (1738/10)%10;
    cent = (1738/100)%10;
    milhar = (1738/1000)%10;

    printf(" Unidades: %d | Dezenas: %d | Centenas: %d | Milhares: %d ", uni, dez, cent, milhar);

    return 0;
}
