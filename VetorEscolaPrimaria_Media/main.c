#include <stdio.h>
#include <stdlib.h>

//Pratique+
/*Em uma turma com 50 alunos, cada um faz 3 provas por semestre.Alem de armazenar as 3 provas dos 50 alunos, existe a
necessidade de mostrar:
    A media de cada prova
    A media de cada aluno
    A media da turma.*/

int main()
{
    float prova1[50], prova2[50], prova3[50], mediaprova1, soma1,soma;
    int pos;
    soma1=0;

    for(pos=0;pos<49;pos++)
    {
        soma1=soma1+prova1[pos];
    }
    mediaprova1=soma/50;
    printf("a media da prova1 e: %f.02", mediaprova1);
    return 0;
}
