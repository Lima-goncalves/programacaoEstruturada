
 #include<stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #define SIZE 200
 int id [SIZE];
 char nome [SIZE][50];
 char email [SIZE][50];
 char sexo [SIZE][50];
 char endereco [SIZE][50];
 double altura [SIZE];

 

 int op;

 void cadastro ();

    int  main (void){

        cadastro ();



        return 0; 
    }





    void cadastro (){
        static int linha;
        srand(time(NULL));
        do
        {
            printf("\nDigite o nome: ");
            scanf("%s", &nome[linha]);

            id[linha] = rand();
            printf("seu id é %d ",id[linha]);
            

            





            printf("\n digite 1 para continuar ou outro valor para repetir ");
            scanf("%d",&op);
            linha++;
        } while (op==1);
        




    }




