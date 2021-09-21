/* Faça a leitura da altura de até cinco pessoas e apresente a média aritmética entre elas,
calculada por um sub-algoritmo.  */

double media(int quant, double *vetor){
    double media=0;

    for (int c=0; c<quant; c++){
        media += vetor[c];
    }
    
    media /= quant;
    return media;
}

#include <stdio.h>
int main(void){

    int quant;
    double media_peso;

    do {
        printf("Quantidade de pessoas: ");
        scanf("%d", &quant);
        
        if(quant > 5){
            printf("A quantidade maxima e 5, tente novamente.\n");
        }
    } while (quant > 5);

    double pesos[quant];

    for(int c=0; c<quant; c++){
        printf("Peso da pessoa %d (kg): ", c);
        scanf("%lf", &pesos[c]);
    }

    media_peso = media(quant, pesos);

    printf("media dos pesos informados: %.2lfkg", media_peso);
    return 0;
}