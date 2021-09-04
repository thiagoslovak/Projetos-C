#include <stdio.h> //Declarando as Bibliotecas
#include <stdlib.h>

int main() //Abrindo a  fun��o principal
{
    int *p, i; //Declarando as variaveis, i e *p do tipo ponteiro
    p = malloc(10*sizeof (int));
    /* Fun��o malloc ela aloca espa�o de memoria (alocando um espa�o de 10 posi��es*sizeof � uma fun��o que retorna
    quanto que o inteiro oc  upa na memoria..Resumindo: Retornando para o ponteiro (p) que vou estar alocando 10 vezes
    o tamanho do tipo int*/
    if(p == NULL){ //Verificando se a fun��o retorno NULL
        printf("Espa�o insuficiente");
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
    free(p);//Fun��o free: Liberar esse espa�o que foi alocado pelo ponteiro (p)
    }
    system("pause");
    return(0);
}
