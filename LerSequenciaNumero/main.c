#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia uma sequencia de numeros inteiros,
terminada em zero e mostre cada numero lido (exeto o zero). */
//Feito em DO WHILE e WHILE.
int main()
{
    int num;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num!=0)
            printf("O numero = %d\n\n", num);
    }
    while (num!=0);
  /*
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  while (num!=0)
  {
      printf("O numero digita foi = %d \n\n", num);
      printf("Digite um numero: ");
      scanf("%d", &num);
  }*/
  return 0;
}
