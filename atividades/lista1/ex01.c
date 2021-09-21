// Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos 

#include <stdio.h>

int main(void){
    double notas[30];
    int c=0;

    for(c; c<30; c++){
        printf("Digite a nota do aluno %d: ", c);
        scanf("%lf", &notas[c]);
        fflush(stdin);
    }

    return 0;
}