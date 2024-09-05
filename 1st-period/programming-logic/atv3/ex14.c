/*For Crie um programa que leia um número inteiro e imprima a tabuada desse número.*/


#include <stdio.h>


int main(void)
{
    int n;
    int tab = 1;


    printf("Digite um numero para saber sua tabuada: ");
    scanf("%i", &n);


    for (int i = 0; i < 10; i++)
    {
        printf("%i x %i = %i.\n", n, tab, n * tab);
        tab++;
    }


    return 0;
}
