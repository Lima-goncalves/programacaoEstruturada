
#include<stdio.h>
#include<string.h>

int iicluirUsuario(double *altura, double alturaValidar,int indice);
double validarAltura(double alturaValidar);


int main (){
 double altura[5] ,alturaValidar;
 int indice=0;
   
   
    iincluirUsuario(altura,alturaValidar,indice);


}

int iicluirUsuario(double *altura, double alturaValidar,int indice)
{
    int op=1;
    do
    {
    altura[indice]=validarAltura(alturaValidar);
    printf("\ndeseja incluir mais um usuario?\nsim:digite 1\n nao:digite 0");
    scanf("%d",&op);
    indice++;
    } while (op==1);
    
   return indice;
}
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















