#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;

Aluno aluno;

int main() {
    setlocale(LC_ALL,"portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.datNasc.dia = 0;
    aluno.datNasc.mes = 0;
    aluno.datNasc.ano = 0;
    printf(" \n O c�digo do aluno �: %d ", aluno.codigo);
    printf(" \n O nome do aluno �: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno �: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
    printf(" \n Digite o c�digo do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf(" \n Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf(" \n Digite o dia de nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.dia);
    printf(" \n Digite o mes de nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.mes);
    printf(" \n Digite o ano de nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.ano);
    printf(" \n O c�digo do aluno �: %d", aluno.codigo);
    printf(" \n O nome do aluno �: %s", aluno.nome);
    printf(" \n A data de nascimento do aluno �: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
    system("pause");
    return(0);
}
