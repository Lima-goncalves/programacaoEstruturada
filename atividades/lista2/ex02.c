/* Faça um algoritmo que calcule, por meio de sub-algoritmo o valor de x(real) elevado a
n(inteiro) */

double expo(double x, int y){
    double pot = x;

    for (int c=0; c<y-1; c++){
        pot *= x;
    }

    return pot;
}

#include <stdio.h>

int main(void){

    double x, potencia;
    int y;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    fflush(stdin);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    potencia = expo(x, y);

    printf("%.2lf ^ %d = %.2lf", x, y, potencia);



    return 0;
}