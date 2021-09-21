/* Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha
pode aparecer em mais de uma posição. */

#include <stdio.h>
int main(void){

    int quant;
    double maior=0,  media=0;

    do{
        printf("Quantidade de pessoas a serem cadastradas: ");
        scanf("%d", &quant);
        if(quant > 100){
            printf("O valor maximo e 100\n");
        }
    }while(quant > 100);

    double pesos[quant];

    for(int c=0; c<quant; c++){
        printf("Peso da pessoa %d (kg): ", c);
        scanf("%lf", &pesos[c]);

        if(pesos[c] > maior){
            maior = pesos[c];
        }

        media += pesos[c];
    }
    
    media = media/quant;


    printf("----------------------------------------------------------\n");
    printf("A media de peso das pessoas informadas e de %.2lfKg\n", media);
    printf("O maior peso e %.2lf, e foi encontrado nas posicoes: ", maior);

    for(int c=0; c<quant; c++){
        if(pesos[c] == maior){
            printf("%d ", c);
        }
    }

    return 0;
}