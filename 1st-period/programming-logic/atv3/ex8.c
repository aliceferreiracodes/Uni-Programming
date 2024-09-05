/*Variáveis e Operadores Aritméticos Crie um programa que leia dois números e
imprima o resultado da multiplicação entre eles.*/


#include <stdio.h>


int main(void)
{
    int n1, n2;


    printf("Digite um numero: ");
    scanf("%i", &n1);


    printf("Digite outro numero: ");
    scanf("%i", &n2);


    printf("A multiplicacao entre esses numeros e igual a %i.\n", n1 * n2);


    return 0;
}
