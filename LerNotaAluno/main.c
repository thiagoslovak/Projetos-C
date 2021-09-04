#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont;
    float nota1,nota2,nota3,media;

    for(cont=1;cont<2;cont++)
    {
        printf("Digite sua nota Aluno 1: ");
        scanf("%f", &nota1);

        printf("Digite sua nota Aluno 2: ");
        scanf("%f", &nota2);

        printf("Digite sua nota Aluno 3: ");
        scanf("%f", &nota3);


}
    media=(nota1+nota2+nota3)/3;

    if(media>=7){
        printf("Voce esta aprovado");

    }else{
        printf("Voce esta reprovado");
    }

    printf("\nA media aritmetica foi: %.2f", media);


    return 0;
}
