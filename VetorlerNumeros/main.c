#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritimo que leia 50 numeros inteiros e armaene-os em um vetor. Copie para um segundo vetor de 50
numeros inteiros cada elemento do primeiro, observando as seguites regras:
 * Se o numero for par, preencha a mesma posição o segundo vetor com o numero sucessor do contido na mesma posicao
 do primeiro vetor.
 * Se o numero for impar, preecha a mesma posicao do segundo vetor com o numero antecessor do contido na mesma posicao
 do primeiro vetor.
Ao final, mostre o conteudo dos dois vetores simultaneamente.*/

int main()
{
    const int tamvet=5;
    int num[tamvet], num2[tamvet], posicao;

    for(posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%d", &num[posicao]);//armazenar o valor em num
        if(num[posicao]%2 == 0)//se a numero armazenado em num dividido por 2 retar% zero
            num2[posicao] = num[posicao]+1;
        else//se nao..
            num2[posicao] = num[posicao]-1;

    }
    printf("Elementos de num e num2: ");

    for (posicao=0;posicao<tamvet;posicao++)
    {
        printf("%d ", num[posicao]);
        printf("%d ", num2[posicao]);
    }
    return 0;
}
