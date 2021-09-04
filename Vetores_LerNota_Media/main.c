#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma nota de prova de 20 alunos e mostre as que são iguais ou maiores
que a media da turma*/

int main()
{


    const int tamNota=5;
    float nota_aluno[tamNota], soma=0,media; int posicao;//Variaveis

    for(posicao=0;posicao<tamNota;posicao++)//For posicao começa em 0, enquanto posicao for menor que o tamNota, posicao++
    {
        scanf("%f", &nota_aluno[posicao]);//Armazena o valor digitado em nota_alunos e vai armazendo nas posicao de acordo do tanto de vezes que vai ter o ciclo for
        soma=soma+nota_aluno[posicao];//soma recebe soma mais a nota aluno digitada
    }
    media=soma/tamNota;//media recebe soma dividido por tamNota

    for (posicao=0;posicao<tamNota;posicao++)
    {
        if (nota_aluno[posicao] >= media)//se a nota aluno for maior ou igual a media
            printf ("%.2f \n", nota_aluno[posicao]);
    }

    return 0;
}
