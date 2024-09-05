/*Do While Implemente um programa que leia números do usuário até que ele digite 0, e
então imprima a soma de todos os números digitados.*/


#include <stdio.h>


int main(void)
{
    int n = 0;
    int input = 0;


    do
    {
        printf("Digite um numero ou zero para finalizar: ");
        scanf("%i", &input);
        n += input;


    } while (input != 0);


    printf("A soma de todos esses numeros e igual a %i.\n", n);
   
    return 0;
}
