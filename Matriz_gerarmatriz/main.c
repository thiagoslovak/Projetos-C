#include <stdio.h>
#include <stdlib.h>

//Atividade 5
/*Faça um programa que gere uma matriz 5x5, conforme esta sequencia:
  0 1 1 1 1
  1 0 1 1 1
  1 1 0 1 1
  1 1 1 0 1
  1 1 1 1 0
*/

int main()
{
    int matriz[5][5], linha, coluna;

    for(linha=0;linha<5;linha++)
    {
        for(coluna=0;coluna<5;coluna++)
        {
            matriz[linha][coluna]=1;
            if(linha==coluna)
                matriz[linha][coluna]=0;
            printf("%d", matriz[linha][coluna]);
         }
            printf("\n");
    }
    return 0;
}
