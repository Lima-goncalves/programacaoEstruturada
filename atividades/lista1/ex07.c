/*Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento
dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda
aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor que
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de
aumento e, para cada CD, o valor sem aumento e o valor com aumento. */

#include <stdio.h>
int main(void){
    printf("\e[H\e[2J");

    int quant, porcentagem, escolha;

    do{
        printf("Quantidade Cd's a serem cadastrados: ");
        scanf("%d", &quant);
        
        if(quant <= 100){
            break;
        }else{
            printf("O valor maximo e 100, tente novamente!\n");
        }
    }while(quant > 100);

    double preco[quant], preco_aumento[quant];

    printf("---------------------------------------\n");
    
    for(int c=0; c<quant; c++){
        printf("preco do cd %d: R$", c);
        scanf("%lf", &preco[c]);
    }

    printf("----------------------------\n");
    printf("(1) Aumento de 10%%.\n");
    printf("(2) Inserir manualmente.\n");
    
    do{
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &escolha);
    if (escolha != 1 && escolha != 2){
        printf("Insira uma opcao valida!\n");
    }    
    }while(escolha != 1 && escolha != 2);

    if (escolha == 1){
        porcentagem = 10;
    }else if(escolha == 2){
        printf("Digite a porcentagem de aumento desejada: ");
        scanf("%d", &porcentagem);
    }

    
    printf("\e[H\e[2J");
    printf("num. \t| preco \t| preco c. desconto\n");
    printf("---------------------------------------\n");
    for (int c=0; c<quant; c++){
        preco_aumento[c] = preco[c] + (preco[c] / 100) * porcentagem;
        printf("%d   \t  R$%.2f\t  R$%.2f\n", c, preco[c], preco_aumento[c]);
    }
    
    printf("---------------------------------------\n");

    return 0;
}