/* 
Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia
um número e verifique se existem elementos no vetor iguais ao número lido. Se existirem,
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão
armazenados no vetor. 
*/

#include <stdio.h>
int main (void){
    int quant, encontrados=0;
    char find;


    do{
    printf("Quantidade de elementos que voce deseja inserir: ");
    scanf("%d", &quant);
    if (quant <= 50) {
        break;
    }else{
        printf("O Valor maximo e 80 elementos. tente novamente.\n");
    }
    } while (quant > 50);
    char elementos[quant];
    int posicao[quant];

    for(int c=0; c<quant; c++){
        fflush(stdin);
        printf("Insira o elemento %d: ", c);
        scanf("%c", &elementos[c]);
    }

    printf("---------------------------------------\n");

    fflush(stdin);
    printf("Digite o elemento que deseja identificar: ");
    scanf("%c", &find);

    for (int c=0; c<quant; c++){
        if (elementos[c] == find){
            encontrados++;
            posicao[encontrados] = c;
            }
    }
    
    printf("---------------------------\n");
    printf("Foram encontrados %d elementos.\n");
    printf("\nNas posicoes: ");
    for (int c=1; c<=encontrados; c++){
        if( c == encontrados){
        printf("%d", posicao[c]);
        } else{
        printf("%d, ", posicao[c]);
        }
    }

    return 0;
}