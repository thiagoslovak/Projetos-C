#include <stdio.h>
#include <stdlib.h>


//Atividade 3
/*Faça um algoritmo que leia uma matriz 4x4 de numeros inteiros. Gere um segunda matriz, na qual as linhas são as colunas
da matriz 1,e as colunas sao as linhas da matriz 1.*/

int main()
{
    int matriz[4][4], matriz2[4][4], linha, coluna;
    for(linha=0;linha<4;linha++)
     for(coluna=0;coluna<4;coluna++)
     {
         printf("\nElemento [%d][%d] = ", linha, coluna);
         scanf("%d", &matriz[linha][coluna]);
         matriz2[linha][coluna]=matriz[linha][coluna];
     }

    printf("\nMatriz ao contrario\n");
    for(coluna=0;coluna<4;coluna++)
     for(linha=0;linha<4;linha++)
    {
       printf("\nOs Elementos[%d][%d] da segunda matriz: %d\n\n", coluna, linha, matriz2[linha][coluna]);
    }

    return 0;
}
