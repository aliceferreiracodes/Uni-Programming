/*Operadores de entrada e saída de dados Escreva um programa que leia dois
números inteiros e imprima a soma deles.*/


#include <stdio.h>


int main(void)
{
    int n1, n2;


    puts("Digite um numero: ");
    scanf("%i", &n1);


    puts("Digite outro numero: ");
    scanf("%i", &n2);


    printf("A soma dos numeros e igual a %i\n", n1 + n2);


    return 0;
}
