#include<stdio.h>
#include<string.h>

double validarAltura(double alturaValidar);
int icluirUsuario(double *altura, double alturaValidar,int indice)

int main (void){

    double altura[5];
    double alturaValidar
    char sexo[5][20];
    int indice=0
    indice=incluirUsuario(altura,alturaValidar,indice);


}
/*  altura */
double validarAltura(double alturaValidar){
   
   do
   {
    printf("\ndigite a altura");
    scanf("%lf", &alturaValidar);
    if (alturaValidar< 1 || alturaValidar>2)
    {
    printf("ALTURA INVALIDA,CERTIFIQUE-SE QUE A ALTURA ESTEJA ENTRE 1 a 2 ");
    }
    
   } while (alturaValidar<1 or alturaValidar>2);
   



return alturaValidar;
}
/*  altura */










/*  INCLUIR USUARIO  */
int icluirUsuario(double *altura, double alturaValidar,int indice)
{int op=1
    do
    {
     altura[indice]= validarAltura(alturaVlidar);
    printf("\ndeseja incluir mais um usuario?\nsim:digite 1\n nao:digite 0");
    scanf("%d",&op);
    indice++
    } while (op==1);
    
   return indice;
}

/*  INCLUIR USUARIO  */
