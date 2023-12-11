#include <stdio.h>

int main(void){
    int numAluno, a, b, c, div, extra;

    printf("Informe o numero de alunos: ");
    scanf("%d", &numAluno);

    div = numAluno / 3;
    extra = numAluno % 3;

    if (extra == 1){
        a = div + 1;
        b = div;
        c = div;
    } 
    if (extra == 2){
        a = div + 1;
        b = div + 1;
        c = div;
    }
    if (extra == 0){
        a = div;
        b = div;
        c = div;
    }

    printf("Numero de alunos na turma A: %d | B: %d | C: %d ", a, b, c);

    return 0;
}
