/* Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo
para ler um número indeterminado de informações (máximo de 50) contendo a matrícula
funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três
empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a
matrícula igual a zero ‘0’ encerra a leitura
*/
#include <stdio.h>
int main(void){

    int matricula[50], quant, meses[50], menor_pos[3], menor_cont=0, cont=1;
    double salario[50];

    for (int c=0; c<50; c++){
        printf("Matricula do funcionario %d: ", c);
        scanf("%d", &matricula[c]);
        if(matricula[c] == 0){
            quant = c;
            break;
        }else{

            printf("Quantidade de meses que o funcionario %d trabalha na empresa: ", c);
            scanf("%d", &meses[c]);
        }
    }

    do{
        for (int c=0; c<quant; c++){
            if(meses[c] == cont){
                menor_pos[menor_cont] = c;
                menor_cont ++;
            }
        }
        cont++;
    }while(menor_cont <= 3);

    for (int c=0; c<menor_cont-1; c++){
        printf("%d - ", meses[menor_pos[c]]);
    }

    return 0;
}