#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, maior;
    maior=0;
    for (cont=1;cont<=2;cont++)
    {
        printf("Digite um n�mero: ");
        scanf("%d", num);
        if (num > maior);
        {
            maior=num;
        }
    }
    printf("O maior dos n�meros lidos = %d\n,=", maior);
    return 0;
}
