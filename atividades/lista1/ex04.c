// Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que foram lidas.
 
#include <stdio.h>
int main (void){
    int quant;
    
    do {
        printf("Quantidade de letras a serem lidas: ");
        scanf("%d", &quant);
        if (quant <= 30){
            break;
        } else {
            printf("O limite de caracteres a ser inseridos e de 30 caracteres. \n");
        }
    } while (quant > 30);
    char letras[quant];

    for (int c=0; c<quant; c++){
        fflush(stdin);
        printf("Caractere %d: ", c);
        scanf("%c", &letras[c]);
    }

    for (int c=quant-1; c>=0; c--){
        if (c != 0){
            printf(" %c -", letras[c]);
        } else{
            printf(" %c", letras[c]);
        }
    }

    return 0;
}