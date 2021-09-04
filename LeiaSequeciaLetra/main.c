#include <stdio.h>
#include <stdlib.h>
//Contagem de letras nas palavras digitadas.
int main()
{
   char letra;
   int contagem_a=0,contagem_e=0,contagem_i=0,contagem_o=0,contagem_u=0;
   printf("Digite uma letra minuscula (a..z) a cada linha e tecle ENTER e digite um .(Ponto) para finalizar: \n");
   scanf("%c", &letra);
   while(letra!='.')
   {
       switch(letra)
       {
       case 'a':
        contagem_a++;break;

       case 'e':
        contagem_e++;break;

       case 'i':
        contagem_i++;break;

       case 'o':
        contagem_o++;break;

       case 'u':
        contagem_u++;break;

       }
       scanf("%c", &letra);
   }

printf("Total de a: %d \n", contagem_a);
printf("Total de e: %d \n", contagem_e);
printf("Total de i: %d \n", contagem_i);
printf("Total de o: %d \n", contagem_o);
printf("Total de u: %d \n", contagem_u);
return 0;
}
