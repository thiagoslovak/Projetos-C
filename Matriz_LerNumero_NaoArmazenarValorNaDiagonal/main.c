#include <stdio.h>
#include <stdlib.h>

//Atividade 2
/*Faça um algoritmo que leia numeros inteiros e os armzene na matriz 4x4. Porem, na diagonal principal,
não armazene o numero lido, e sim um 0(zero).*/

int main()
{
    int matriz[4][4], linha,coluna;
    for(linha=0;linha<4;linha++)//For da linha
     for(coluna=0;coluna<4;coluna++)//For da coluna
    {
        if(linha==coluna)
        {
            printf("Elemento[%d][%d] = 0\n", linha, coluna);
            matriz[linha][coluna]=0;
        }
        else
        {
            printf("Elemento[%d][%d] = ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }

    }
    printf("\nListagem dos elementos da matriz\n");
    for (linha=0;linha<4;linha++)
     for(coluna=0;coluna<4;coluna++)
        printf("\nElemento[%d][%d] = %d", linha, coluna, matriz[linha][coluna]);

        /*
        * 1 2 3
        1 * 2 3       Esse é o resultado, o * é no caso o 0. Sempre quando a coluna for igual a linha o numero vira 0.
        2 1 * 3
        3 1 2 *
        */
    return 0;
}
