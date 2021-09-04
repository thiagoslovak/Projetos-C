#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num!=0)
    {
        printf("O numero lido foi = %d \n\n", num);
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    return 0;
}
