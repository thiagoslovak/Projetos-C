#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100], posicao;

    for(posicao=0;posicao<100;posicao++)
    {

        scanf("%d", &num[posicao]);
    }

    for(posicao=99;posicao>=0;posicao--)
    {

        printf("%d \n",num[posicao]);
    }


    return 0;
}
