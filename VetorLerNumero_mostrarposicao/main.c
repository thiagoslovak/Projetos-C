#include <stdio.h>
#include <stdlib.h>

/* Atividade 5 Faça um algoritmo que leia 50 numeros inteiros e armazene-os em um vetor. Na sequencia, leia uma lista
de 10 numeros inteiros e verifique se cada um deles esta contido em alguma posicao do vetor. Em caso positivo, mostre
a posicao do vetor em que ele se encontra.*/

int main()
{

    const int tamvet=5; // tamanho vetor
    int num[tamvet], numero, posicao, posicao_vetor, achou;

    printf("Digite os dados para o vetor \n");
    for(posicao=0;posicao<5;posicao++)
    {
        scanf("%d", &num[posicao]);
    }
    printf("Digite os numeros da lista \n");
    for(posicao=1;posicao<=10;posicao++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        posicao_vetor=0;
        achou=0;
        while(posicao_vetor<=tamvet-1 && achou==0)
        {
            if(numero==num[posicao_vetor])
                achou=1;
            else
               posicao_vetor=posicao_vetor+1;
        }
        if(achou==1)
            printf("achou numero na posicao: %d",posicao_vetor);
        else
            printf("nao achou o numero");
    }
    return 0;
}
