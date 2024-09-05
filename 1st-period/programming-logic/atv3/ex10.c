/*Estruturas de Decisão e Operadores Lógicos Implemente um programa que
determine se um ano é bissexto ou não.*/


#include <stdio.h>


int main(void)
{
    int ano;


    printf("Digite um ano para saber se ele e bissexto ou nao: ");
    scanf("%i", &ano);


    if (ano % 4 == 0)
    {
        printf("Esse ano e bissexto.\n");
    }
    else
    {
        printf("Esse ano nao e bissexto.\n");
    }


    return 0;
}
