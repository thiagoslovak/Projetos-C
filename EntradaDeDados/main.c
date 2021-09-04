#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int numero;
    printf("Entre com um número: ");
    scanf("%d", &numero);//scanf permite que o valor informado pelo usuario seja armazenado na variavel numero
    printf("O numero informado foi: %d", numero);

    */

    /*
    float dividendo, divisor;
    printf("Entre com dois numeros reais:\n");
    scanf("%f %f", &dividendo, &divisor); // O simbolo & antes da variavel deve ser lido como o endereço de
    printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);
    */

    /*
    float dividendo;
    int divisor;
    printf("Entre com dois numeros reais:\n");
    scanf("%f %d", &dividendo, &divisor);
    printf("A divisao de %.2f por %d vale %.2f", dividendo, divisor, dividendo/divisor);
    */

    char ch1, ch2;
    printf("Entre com duas letras: \n");
    scanf("%c", &ch1);
    scanf("%c", &ch2);
    printf("As letras inseridas fora %c e %c.", ch1,ch2);



    return 0;
}
