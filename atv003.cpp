#include<stdio.h>
int main(){
    int i,quantidade,soma;
    printf("quantos dados serao somado");
    scanf("%i", &quantidade);
    float dados[quantidade];
    for ( i = 0; i < quantidade; i++)
    {
    
        printf("dado %i: ",i+1);
        scanf("%f", &dados[i]);
    }
        soma=0;
     for ( i = 0; i < quantidade; i++)
    {
        soma=soma+dados[i];
    }
    printf("soma= %i",soma);
    



    

    return 0;
}