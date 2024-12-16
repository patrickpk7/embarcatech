//*******************************************************************************//
/* 
   Cálculo do fatorial de um número.
*/

#include <stdio.h>

int calc_fat(int);

int main()
{
    int numero = 2;
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
int calc_fat(int b)
{
    int contador;
    int fatorial = 1;
    for (contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d",fatorial);
    }
    return fatorial;
}