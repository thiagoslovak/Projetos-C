#include <stdio.h>
#include <stdlib.h>
//ESTRUTURA DE DECISAO ANINHADA

int main(){
    int opcao;

    printf("Entre com 1- para adicionar e 2- para excluir\n");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:{
            printf("\nNumero 1\n");
            break;
        }

        case 2:{
            printf("\nNumero 2\n");
            break;
        }

        default: printf("\nOpcao invalida\n");
            //default é a opção executada causo não em nem um dos case.
    }

    printf("Final do programa");

//SWITCH >> Indicado quando tem um menu. EX: Você quer opção número 1 ou número 2.

/*
//    ESTRUTURA DE DECISAO ANINHADA
    if(opcao >= 0){
        if(opcao == 0){
            printf("\nNumero nulo.\n");
        }else{
            printf("\nNumero positivo.\n");
        }
    }else{
        printf("\nNumero negativo.\n");
    }
    /*
     ALI, se opcao for MAIOR ou IGUAL a 0, if opcao == 0 NUMERO NULO, SENAO ELSE NUMERO POSiTIVO...
     Isso é uma estrutura de decisao aninhada. Por conta que os parametros do primeiro if diz Mair ou igual, são
     duas condições;
     */



    }




