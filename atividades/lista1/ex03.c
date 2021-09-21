/* Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos. */

#include <stdio.h>

int main(void){
    int c=0, quant, soma=0;

    do{
        printf("Quantidade de elementos a serem lidos: ");
        scanf("%d", &quant);
        if (quant <= 100){
            break;
        } else {
            printf("O Valor maximo e 100, tente novamente.\n");
        }
    } while (quant>100);
    int dados[quant];

    c=0;
    for(c; c<quant; c++){
        printf("Digite o valor %d: ", c);
        scanf("%d", &dados[c]);
    }

    c=0;
    for (c; c<quant; c++){
        soma += dados[c];
    }
        printf("A Soma de todos os valores informados e de %d", soma);

    return 0;
}