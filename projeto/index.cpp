
 #include<stdio.h>
 #define SIZE 200
 char nome [SIZE][50];
 char email [SIZE][50];
 char sexo [SIZE][50];
 char endereco [SIZE][50];

 int op;

 void cadastro ();

    int  main (void){

        cadastro ();



        return 0; 
    }

    
    void cadastro (){
        static int linha;
        do
        {
            printf("\nDigite o nome: ");
            scanf("%s", &nome[linha]);






            printf("\n digite 1 para continuar ou outro valor para repetir ");
            scanf("%d",&op);
            linha++;
        } while (op==1);
        




    }