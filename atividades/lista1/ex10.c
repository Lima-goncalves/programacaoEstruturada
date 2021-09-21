/* Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.*/

#include <stdio.h>
int main(void){

    int freq, quant, num;

    do {
        printf("Quantidade de alunos na turma: ");
        scanf("%d", &quant);
        
        if(quant > 80){
            printf("A quantidade maxima e 80, tente novamente.\n");
        }
    } while(quant > 80);

    int notas[80];

    for(int c=0; c<quant; c++){
        do{
            printf("Nota do aluno %d: ", c);
            scanf("%d", &notas[c]);

            if(notas[c] > 10 || notas[c] < 0){
                printf("valor invalido, Insira um valor inteiro entre 0 e 10\n");
            }
        } while(notas[c] > 10 || notas[c] < 0);
    }
    printf("\e[H\e[2J");
    printf("Nota \t| freq.\n");
    do{
        freq = 0;
        for (int c=0; c<quant; c++){
            if (notas[c] == num){
                freq ++;
            }
        }
        printf("%d  \t   %d\n", num, freq);
        num++;
    } while(num <= 10);

    return 0;
}