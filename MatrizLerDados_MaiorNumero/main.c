#include <stdio.h>
#include <stdlib.h>

//Atividade 4
/*Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de numeros inteiros. Em seguinda, mostre
os elementos que sejam iguais ao maior numero armazenado na matriz.*/

int main()
{
    int matriz[3][3], linha, coluna, maior=0,contigual=0;
    printf("\nDIgite valor para os elementos da matriz \n\n");
    for(linha=0;linha<3;linha++)
     for(coluna=0;coluna<3;coluna++)
    {
        printf("Elemento[%d][%d] = ", linha, coluna);
        scanf("%d", &matriz[linha][coluna]);
        if(matriz[linha][coluna] > maior)
        {
            maior=matriz[linha][coluna];
        }else
            if(matriz[linha][coluna]==maior)
             contigual++;
    }
    printf("\n Maior: %d ", maior);
    printf("\n Quantas vezes apareceu o numero maior: %d" ,contigual);


    return 0;
}
