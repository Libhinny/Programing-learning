#include <stdio.h>
#include <stdlib.h>

struct lista{
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor (struct lista *pLista, int valor){

    while(pLista != NULL){
        if (pLista->valor == valor){
            return(pLista);
        }else{
            pLista = pLista->proximo;
        }
    }
    return(NULL);
}

int main(void){

    struct lista *procurarValor (struct lista *pLista, int valor);
    struct lista m1, m2, m3;
    struct lista *resultado, *gancho = &m1;
    int valor;

    m1.valor = 5;
    m1.valor = 10;
    m2.valor = 15;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = NULL;

    printf("Digite o valor da pesquisa: \n");
    scanf("%i", &valor);

    resultado = procurarValor (gancho, valor);

    if(resultado == NULL){
        printf("Valor nao encontrado\n");
    }else{
        printf("Valor %i enocntrado\n", resultado->valor);
    }
    

    return 0;
}