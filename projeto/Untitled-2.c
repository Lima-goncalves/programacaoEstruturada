#include<stdio.h>
#include<string.h>
double validarAltura(double alturaValidar);
int icluirUsuario(double *altura, char endereco[][50], char sexo[][20], char nome[][20], double* alturaValidar, int indice, char *nomeValidar, char *enderecoValidar, char *sexoValidar);
char* validarSexo(char *sexoValidar);
char* validarnome(char *nomeValidar);
char* validarendereco(char *enderecoValidar);
int menu ();


int main (){
double altura[5], alturaValidar[5];
char sexo [5] [20], sexoValidar[5];
char nome [5] [20], nomeValidar[5];
char endereco [5][50], enderecoValidar[5];
int indice=0;

  indice=icluirUsuario(altura,endereco,sexo,nome,alturaValidar,indice,nomeValidar,enderecoValidar,sexoValidar);


    /*  processamento */
switch (menu())
    {
    case 1:
       indice=icluirUsuario(altura,endereco,sexo,nome,alturaValidar,indice,nomeValidar,enderecoValidar,sexoValidar);
       

        break;
     case 2/* constant-expression */:
        /* code */
        break;
     case 3/* constant-expression */:
        /* code */
        break;
     case 4/* constant-expression */:
        /* code */
        break;
     case 5/* constant-expression */:
        /* code */
        break;
     case 6/* constant-expression */:
        /* code */
        break;
     case 7/* constant-expression */:
        /* code */
        break;
     case 8 /* constant-expression */:
        /* code */
        break;
    default: printf("valor invalido,");
        break;
    }
    /*  processamento */
    return 0;
}




/*  altura */
double validarAltura(double alturaValidar){
   
   do
   {
    printf("\ndigite a altura");
    scanf("%lf", &alturaValidar);
    if (alturaValidar< 1 || alturaValidar>2)
    printf("ALTURA INVALIDA,CERTIFIQUE-SE QUE A ALTURA ESTEJA ENTRE 1 a 2 ");
    
   } while (alturaValidar<1 or alturaValidar>2) ;
   



return alturaValidar;
}
/*  altura */
char* validarSexo(char *sexoValidar){
    do
    {
       printf("\nDigite seu sexo: ");
        printf("\nOpcoes :\n feminino \nMasculino \nNao declarar");
       fflush(stdin);
       fgets(sexoValidar,20,stdin);
        if (stricmp(sexoValidar,"Feminino") !=0 or stricmp(sexoValidar,"Masculino") !=0 or stricmp(sexoValidar,"nao declarar") !=0)
        {
           printf("sexo regitrado invalido ");
        }
    } while ( (stricmp(sexoValidar,"Feminino") !=0 or stricmp(sexoValidar,"Masculino") !=0 or stricmp(sexoValidar,"nao declarar") !=0));
    

 return sexoValidar ;

}
char* validarnome(char *nomeValidar){

       printf("\nDigite seu nome: ");
       fflush(stdin);
       fgets(nomeValidar,30,stdin); 
    


    return nomeValidar ;
}
char* validarendereco(char *enderecoValidar){

       printf("\nDigite seu nome: ");
       fflush(stdin);
       fgets(enderecoValidar,50,stdin); 
 
    return enderecoValidar ;
}







/*  nomevalidar */
/*  INCLUIR USUARIO  */
int icluirUsuario(double *altura, char endereco[][50], char sexo[][20], char nome[][20], double* alturaValidar, int indice, char *nomeValidar, char *enderecoValidar, char *sexoValidar)
{ int op;
    do
    {
     strcpy(sexo[indice],validarSexo(sexoValidar));
     altura[indice]= validarAltura(alturaValidar);
     



    printf("\ndeseja incluir mais um usuario?\nsim:digite 1\n nao:digite 0");
    scanf("%d",&op);
    indice++;
    } while (op==1);
    
   return indice ;
}

/*  INCLUIR USUARIO  */
/*  MENU  */
int menu ( ){
    int opcao;
    printf("1-Incluir usuario\n2-Editar\n3-Excluir\n4-Buscar\n5-Imprimir\n6-backupn\n7-Restaurar\n8-CLICA AI :3");
    scanf("%d", &opcao);
    return opcao ;
}
/*  MENU  */