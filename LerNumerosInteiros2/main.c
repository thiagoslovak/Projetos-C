#include <stdio.h>
#include <stdlib.h>
//Exercicio ler numeros inteiros em WHILE e FOR;
int main
()
{
    int num, maior, cont;
    maior=0; //Definir a variavel com 0, garante que qualquer numero vai ser maior que a variavel valendo 0
    cont=1;
    while(cont<=15)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("O numero digitado foi: %d \n\n", num);
        if(num > maior)
        {
            maior=num;
        }
        cont++;
    }
    printf("O maior numero digitado foi: %d", maior);

    /*for(cont=1;cont<=15;cont++)
    {

        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("O numero digitado foi: %d \n\n", num);
        if(num > maior)
        {
            maior=num;
        }
    }
    printf("O maior numero digitado foi: %d", maior);*/
    return 0;
}
