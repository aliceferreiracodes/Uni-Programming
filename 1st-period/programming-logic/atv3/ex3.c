/*Estruturas de decisão e Operadores lógicos Escreva um programa que leia um
número e informe se ele é positivo, negativo ou zero.*/


#include <stdio.h>


int main(void)
{
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);


    if (n > 0)
    {
        printf("Esse numero e positivo.\n");
    }
    else if (n < 0)
    {
        printf("Esse numero e negativo.\n");
    }
    else
    {
        printf("Esse numero e zero.\n");
    }


    return 0;
}
