/* . Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem (menos que 50).
 O número de aluno será informado pelo usuário.*/

#include <stdio.h>

int main(void){
    int alunos, c=0;

    do{
        printf("Insira a quantidade de alunos nessa turma: ");
        scanf("%d", &alunos);
        fflush(stdin);

        if (alunos <= 50){
            break;
        }else{
            printf("Numero maximo de alunos em uma turma excedido, tente novamente (O numero maximo e 50)\n");
            printf("------------------------------------------------------------------------------------------------\n");
        }

    } while (alunos > 50);
    double notas[alunos];


    for(c; c<alunos; c++){
        printf("Digite a nota do aluno %d: ", c);
        scanf("%lf", &notas[c]);
        fflush(stdin);
    }

    return 0;
}