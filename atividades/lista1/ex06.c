/* Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os
dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser
obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.
*/

#include <stdio.h>

int maior(double *vetor, int tamanho){
    int pos;
    double maior=0;

    for (int c=0; c<tamanho; c++){
        if(vetor[c] > maior){
            maior = vetor[c];
            pos = c;
        }
    }

    return pos;
}

int menor(double *vetor, int tamanho){
    int pos;
    double menor;

    for (int c=0; c<tamanho; c++){
        if(vetor[c] < menor){
            menor = vetor[c];
            pos = c;
        }
    }

    return pos;
}

int main(void){
    printf("\e[H\e[2J");

    int quant;

    do{
        printf("Quantidade de funcionarios na empresa: ");
        scanf("%d", &quant);
        
        if(quant <= 100){
            break;
        }else{
            printf("O numero maximo de funcionarios e 100, tente novamente!\n");
        }
    }while(quant > 100);

    int matricula[quant];
    double salario[quant];

    for(int c=0; c<quant; c++){
        printf("Matricula do funcionario: ");
        scanf("%d", &matricula[c]);
        printf("Salario do funcionario:R$");
        scanf("%lf", &salario[c]);
        printf("-------------------------------------\n");
    }
    printf("\e[H\e[2J");


    printf("-------Tabela de funcionarios------\n");
    printf("\n");
    printf("Matr. |\t Salario\n");
    printf("----------------------\n");
    for (int c=0; c<quant; c++){
        printf("%d \t %.2lf\n", matricula[c], salario[c]);
    }
    printf("----------------------\n");


    int sal_maior = maior(salario, quant);
    int sal_menor = menor(salario, quant);

    printf("O funcionario %d tem o maior salario, ganhando:  R$%.2lf", matricula[sal_maior], salario[sal_maior]);
    printf("\n");
    printf("O funcionario %d tem o menor salario, ganhando:  R$%.2lf", matricula[sal_menor], salario[sal_menor]);

    return 0;
}
