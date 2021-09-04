#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Numeros inteiros: 1, 0, -1, -50, 45, 22
    //Marcador de  Posicao: %d

    //Numeros Floats: 2.1, 5.00, 0.002, -0.92
    //Marcador de Posicao: %f

    /*
    O %d é o marcador de posisao, ou seja voce coloca o
    marcador e dpois no final coloca o numero que vai aparecer
    */
    printf("O numero %d eh um numero inteiro \n", 2);
    printf("O numero %1.1f eh um numero float\n", 2.4);
    /*
    O %f é um marcador, ali está %1.1f isso é um delimitador do numero 2.4;
    Se não colocar esse %1.1f o numero aparece com varios 0
    */

    /*
    Operadores Aritmeticos Basicos
    Soma +
    Subtração -
    Multiplicação *
    Divisao /
    */

    printf("Soma de 5 + 2: %d \n", 5+2);
    printf("Subtracao de 5 - 2: %d \n", 5-2);
    printf("Multiplicacao de 5*2: %d \n", 5*2);
    printf("Divisao de 5 / 2: %1.1f \n", 5.0/2.0);

    return 0;

}
