
/* Elabore um algoritmo que solicite ao usuário o seu ano de nascimento e o ano atual. Após a
leitura, ele acionará um sub-algoritmo, denominado apresentaClassificacao, que apresentará
a idade provável, em anos, deste usuário, e sua classificação. 
Ele deverá acionar um outro subalgoritmo, chamada obtemNivel, 
que identificará qual o nível da idade deste usuário,
classificando-a em:

idade <= 10 CRIANÇA
10 > idade < 18 ADOLESCENTE
18 >= idade < 25 JOVEM
25 >= idade <= 58 ADULTO
idade > 58 IDOSO

Esta classificação será apresentada, juntamente com a idade calculada, no sub-algoritmo
calculaidade. Os dados deverão ser lidos enquanto o usuário desejar. */

#include <stdio.h>

/* declaração dos protótipos */
void obtemNivel(int idade, int anoAtual);
void apresentaClassificacao(int anoAtual, int AnoNas);


/* fim declaração dos protótipos*/


int main (void){
    
    int anoNascimento, anoAtual, idade;
    char continuar;
    fflush(stdin);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);
    printf("\n\n");

    do{
        fflush(stdin);
        
        printf("------------------------------------------\n");

        printf("Ano de nascimento: ");
        scanf("%d", &anoNascimento);

        apresentaClassificacao(anoAtual, anoNascimento);

        

        do{
            fflush(stdin);
            printf("deseja continuar (S/N): ");
            continuar = getchar();
            if(continuar != 's' && continuar != 'n' && continuar != 'S' && continuar != 'N'){
                printf("Digite uma opcao valida!\n");
            }
            }while(continuar != 's' && continuar != 'n' && continuar != 'S' && continuar != 'N');
        } while(continuar == 'S' || continuar == 's');

    return 0;
}

void apresentaClassificacao(int anoAtual, int AnoNas){
    int idade;

    idade = anoAtual - AnoNas;

    obtemNivel(idade, anoAtual);
}

void obtemNivel(int idade, int anoAtual){
        printf("------------------------------------------\n");
        
        if (idade <= 10){
            printf("uma pessoa que nasceu em %d tem %d anos de idade:  CRIANCA\n", anoAtual, idade);
        }else if(idade < 18){
            printf("uma pessoa que nasceu em %d tem %d anos de idade: ADOLESCENTE\n", anoAtual, idade);
        }else if(idade < 25){
            printf("uma pessoa que nasceu em %d tem %d anos de idade: JOVEM\n", anoAtual, idade);
        }else if(idade <= 58){
            printf("uma pessoa que nasceu em %d tem %d anos de idade: ADULTO\n", anoAtual, idade);
        }else{
            printf("uma pessoa que nasceu em %d tem %d anos de idade:  IDOSO\n", anoAtual, idade);
        }
        printf("------------------------------------------\n");
}
