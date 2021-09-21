// Crie um algoritmo que pergunta ao usuario qual o peso das


double media_pond(double n1, double n2, int peso1, int peso2){
    double media;

    media = (n1*peso1 + n2*peso2) / (n1 + n2);

    return media;
}

#include <stdio.h>
int main (){ 

    int quant, peso1, peso2;

    do {
        printf("quantidade de alunos na turma: ");
        scanf("%d", &quant);
        if (quant > 20){
            printf("O valor maximo e 20! tente novamente.\n");
        }
    } while(quant > 20);

    double nota1[quant], nota2[quant];

    for (int c=0; c<quant; c++){
        printf("primeira nota do aluno %d: ", c);
        scanf("%lf", &nota1[c]);
        printf("segunda nota do aluno %d: ", c);
        scanf("%lf", &nota2[c]);
    }

    printf("Digite os pesos da notas 1 e 2 respectivamente.\n");
    printf("peso 1: ");
    scanf("%d", &peso1);
    printf("peso 2: ");
    scanf("%d", &peso2);

    double media_notas[quant];
    printf("\nmedias com peso %d e %d respectivamente.\n");
    printf("-----------------------------------------------------------\n");
    printf("Num \tmedia\n");
    for (int c=0; c<quant; c++){
        printf("%d \t%.2lf\n", c,
        media_pond(nota1[c], nota2[c], peso1, peso2));
    }
    
    return 0;
}