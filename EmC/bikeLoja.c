#include <stdio.h>

int main(void){
    int totalBike, numEmp;
    float precoBike, bikeFinal, salario;

    printf("Informe a quantidade de empregados de sua loja: ");
    scanf("%d", &numEmp);
    printf("Informe o salario minimo: ");
    scanf("%f", &salario);
    printf("Informe o preco da bike: ");
    scanf("%f", &precoBike);
    printf("Informe a quantidade de bikes vendidas: ");
    scanf("%d", &totalBike);

    bikeFinal = precoBike + ( precoBike * 0.5 );
    salario = (2*salario*numEmp) + (totalBike*precoBike*0.15);
    
    printf("O salario final de cada empregado foi de %.2f \n", salario);
    printf("O lucro liquido da loja foi de %.2f", bikeFinal - salario);

    return 0;
}
/*
14

Uma loja vende bicicletas com um acréscimo de 50% sobre o seu preço de custo. Ela
paga a cada vendedor dois salários-mínimos mensais, mais uma comissão de 15%
sobre o preço de custo de cada bicicleta vendida, dividida igualmente entre eles.
Escreva um algoritmo que leia o número de empregados da loja, o valor do salário-
mínimo, o preço de custo de cada bicicleta, o número de bicicletas vendidas, calcule e
escreva: O salário final de cada empregado e o lucro (liquido) da loja.

nem foi eu que fiz :(
*/
