#include <stdio.h>
#include <stdlib.h>
//ESTRUTURA DE DECISAO SIMPLES
int main()
{
    int cadastrado, ativo, logado;
    char opcao;

    cadastrado = ativo = logado = 0;

    printf("Deseja cadastrar sua conta ? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        cadastrado = 1;
        printf("Conta cadastrada \n");
    }

    printf("Deseja ativivar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        ativo = 1;
        printf("\nConta ativada. \n");
    }

    printf("Deseja logar na sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S'){
        logado = 1;
        printf("\nConta logada.\n");
    }

    if((cadastrado == 1) && ((ativo ==1) || (logado ==1))){//  || simbolo tabela verdade ou. ALI basta um ser verdadeiro.
        printf("\nSeja bem vindo.\n");
    }else{
        printf("\nAlgo deu errado.\n");
    }
}
