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
            //default � a op��o executada causo n�o em nem um dos case.
    }

    printf("Final do programa");

//SWITCH >> Indicado quando tem um menu. EX: Voc� quer op��o n�mero 1 ou n�mero 2.

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
     Isso � uma estrutura de decisao aninhada. Por conta que os parametros do primeiro if diz Mair ou igual, s�o
     duas condi��es;
     */



    }




