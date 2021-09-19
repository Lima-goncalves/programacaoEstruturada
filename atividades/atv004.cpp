#include<stdio.h>

int main(){
    int quantidade,i;
    char letras[quantidade];

    printf("qual é a quantidade de letras? ");
    scanf("%i", &quantidade);
     for (i = 0; i < quantidade ; i++)
     {
         printf("leta %i: ",i);
         scanf("%c",letras[i]);
     }
     
    printf("ola");

    return 0;
}
