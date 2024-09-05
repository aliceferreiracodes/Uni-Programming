/*Atribuições Aritméticas Escreva um programa que calcule o quadrado de um número
usando atribuição aritmética.*/


#include <stdio.h>


int main(void)
{
    int n1 = 2, n2 = 2;
    int sqr = 2;
   
    for (int i = 1; i < sqr; i++)
    {
        n1 = n1 * n2;
    }


    printf("O quadrado de 2 e igual a %i.\n", n1);
}
