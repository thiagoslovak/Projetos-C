#include <stdio.h>
#include <stdlib.h>

//Atividade 1
/*Faça um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números para es ímpares
armazenados na matriz.*/

int main()
{
    int matriz[3][4], linha, coluna, contagem_par=0, contagem_impar=0;
    printf("\n Digite valor para os elementos da matriz\n\n");
    for(linha=0;linha<3;linha++)//contador
     for(coluna=0;coluna<4;coluna++)//contador
    {
        printf("\n Element[%d][%d] = ", linha,coluna);//Pedindo o dado de entrada
        scanf("%d", &matriz[linha][coluna]);//armazenando
    }
    printf("\n\n**************************** Saida de Dados ****************************");
    for(linha=0;linha<3;linha++)//contador
     for(coluna=0;coluna<4;coluna++)//contador
    {
        if(matriz[linha][coluna]%2 == 0)//se a matriz dividido por 2 %restar 0; no caso define oque e par
            contagem_par++;//armazena na matriz e vai fazendo o ciclo de contagem
        else
            contagem_impar++;
    }
    printf("\n Pares: %d", contagem_par);
    printf("\n Impares: %d", contagem_impar);
    return 0;
}
