#include<stdio.h>


int main(){
    //1. Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
    float nota[30];
    int i;

    for ( i = 0; i <30; i++)
    {
    printf("digite a nota%i: ",i+1);
    scanf("%f", &nota[i]);
    }
    
    for ( i = 0; i <30; i++)
    {
    printf("\nnota[%d]= %f",i+1,nota[i]);
    
    }
    
return 0;
}

