#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont,n,num,somapar,somaimpar;
    somapar=0;
    somaimpar=0;
    printf ("Digite a quantidade de n�meros da lista: ");
    scanf("%d",&n);
    for (cont=1;cont<=n;cont++)
    {
        printf ("Digite um n�mero: ");
        scanf("%d",&num);
        if (num%2==0)
            somapar=somapar+num;
        else
            somaimpar=somaimpar+num;
    }
    printf ("A soma dos n�meros pares = %d\n",somapar);
    printf ("A soma dos n�meros �mpares = %d\n",somaimpar);
return 0;
}
