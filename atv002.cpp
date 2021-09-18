#include<stdio.h>


int main(){
   //Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem(menos que 50). O número de aluno será informado pelo usuário.
   int i,alunos;
   printf("quantos alunos tem na turma ");
   scanf("%i", &alunos);
   float nota[alunos];
    if (alunos<50)
   {
       for ( i = 0; i <alunos; i++)
    {
    printf("digite a nota%i: ",i+1);
    scanf("%f", &nota[i]);
    }
    
    for ( i = 0; i <30; i++)
    {
    printf("\nnota[%d]= %f",i+1,nota[i]);
    
    }
    
   }
    else
    printf("quantidade invalida de alunos na sala ");
    

    
return 0;
}
