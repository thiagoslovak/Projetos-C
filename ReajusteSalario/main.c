#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float percentual_reajuste,salario,salario_reajuste,maior_salario;
    maior_salario=0;
    printf("Percentual de reajuste salarial: ");
    scanf("%f", &percentual_reajuste);
    for(cont=1;cont<=50;cont++)
    {
        printf("Informe o salario do funcionario: ");
        scanf("%f", &salario);
        salario_reajuste=salario+(salario*percentual_reajuste/100);
        printf("O salario reajustado e: %.2f \n\n",salario_reajuste);
        if (salario_reajuste>maior_salario)
            maior_salario=salario_reajuste;
    }
    printf("O maior salario reajustado e : %.2f", maior_salario);
    return 0;
}
