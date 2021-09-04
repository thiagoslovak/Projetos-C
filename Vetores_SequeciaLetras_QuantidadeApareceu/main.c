#include <stdio.h>
#include <stdlib.h>
/*Leia uma sequencia de letras, terminada na letra("z"), e mostre quantas
vezes cada vogal(a,e,i,o,u)apareceu.*/
int main()
{
    int vet_letra[5] = {0,0,0,0,0}, posicao; //Iniciar o vertor com valores zero
    char letra;//variavel tipo char = caracteres
    scanf("%c", &letra);//armazenar o valor digitado em letra o "%c" é um marcador char
    while(letra!='z')//Enquanto letra for diferente ou igual a z
    {
        switch(letra)//escolha
        {
            case 'a'://caso for a
                vet_letra[0]++;//armazena na posicao 0 do vetor e vai contando
                break;
            case 'e'://caso for e
                vet_letra[1]++;//armazena na posicao 1 do vetor e vai contando
                break;
            case 'i':
                vet_letra[2]++;
                break;
            case 'o':
                vet_letra[3]++;
                break;
            case 'u':
                vet_letra[4]++;
                break;
        }
        scanf("%c", &letra);//armazena na variavel letra
    }
    printf("Quantidade de cada vogal, em ordem: \n");
    for(posicao=0;posicao<5;posicao++)//posicao iniciada em 0, enquanto posicao for menor que 5, posicao++
    {
        printf("%d  ",vet_letra[posicao]);//escrever na tela as posisoes das letras e quantidades de vezes digitadas.
    }
    return 0;
}
