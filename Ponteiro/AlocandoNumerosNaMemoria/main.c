#include <stdio.h> //Declarando as Bibliotecas
#include <stdlib.h>

int main() //Abrindo a  função principal
{
    int *p, i; //Declarando as variaveis, i e *p do tipo ponteiro
    p = malloc(10*sizeof (int));
    /* Função malloc ela aloca espaço de memoria (alocando um espaço de 10 posições*sizeof é uma função que retorna
    quanto que o inteiro oc  upa na memoria..Resumindo: Retornando para o ponteiro (p) que vou estar alocando 10 vezes
    o tamanho do tipo int*/
    if(p == NULL){ //Verificando se a função retorno NULL
        printf("Espaço insuficiente");
        exit(i);
    }else{
    printf("Primeiros 10 numeros. \n");
    for(i=0; i<10; i++) {
            p[i] = i+10;//Adcionando o valor atual + 10
            printf(" %d-%d\n",i,p[i]);
    }
    p = realloc(p,20*sizeof(int)); //realloc, realocando (oque ja tinha(p), mais(20)elementos
    printf("Realocado para mais 10 numeros.\n");
    for(i=10; i<20; i++) {
            p[i] = i+20;
            printf(" %d-%d\n",i,p[i]);
    }
    printf("Todos os 20 numeros alocados.\n");
    for(i=0; i<20; i++)
            printf(" %d-%d\n",i,p[i]);
    free(p);//Função free: Liberar esse espaço que foi alocado pelo ponteiro (p)
    }
    system("pause");
    return(0);
}
