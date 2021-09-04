/*Ficha dee Aluno*/
#include <stdio.h> //Fun��es de I/O nos dispositivos stdin, stdout e files.
#include <stdlib.h> //Fun��es de manipula��o de caracteres na tela.

int main(void)
{
    /*Criando  a  struct */
    struct ficha_de_aluno
    {
        char nome[50];
        char disciplina[30];
        float nota_prova1;
        float nota_prova2;
    };

    /*Criando a vari�vel aluno que ser� do tipo struct ficha_de_aluno*/
    struct ficha_de_aluno aluno;

    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    printf("Nome do aluno ......: ");
    fflush(stdin);
    fgets(aluno.nome, 40, stdin); //(fgets) Instru��o para ler strings. fgets(variavel, tamanho da string, entrada)
    //Neste caso, a entrada � stdin (entrada padr�o), pois estamos lendo do teclado
    printf("Disciplina ......: ");
    fflush(stdin);
    fgets(aluno.disciplina, 40, stdin); // (fgets) Instru��o para ler strings. fgets(variavel, tamanho da string, entrada)
    //Neste caso, a entrada � stdin (entrada padr�o), pois estamos lendo do teclado
    printf("Informe a 1a. nota ..: ");
    scanf("%f", &aluno.nota_prova1);
    printf("Informe a 2a. nota ..: ");
    scanf("%f", &aluno.nota_prova2);
    printf("\n\n ---------- Lendo os dados da struct ----------\n\n");
    printf("Nome ..........: %s", aluno.nome);
    printf("Disciplina .....: %s", aluno.disciplina);
    printf("Nota da Prova 1 .....: %.2f\n", aluno.nota_prova1);
    printf("Nota da Prova 2 .....: %.2f\n", aluno.nota_prova2);
    getch();
    return(0);
}
