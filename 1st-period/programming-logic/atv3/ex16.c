/*Manipulação de Strings Implemente um programa que leia uma frase (string) e conte
quantas vogais (a, e, i, o, u) ela possui.*/


#include <stdio.h>
#include <string.h>


#define max_size 100


int main(void)
{
    int counter = 0;
    char string[max_size];


    printf("Digite uma frase de no maximo 100 caracteres para saber quantas vogais ela possui: ");
    fgets(string, max_size, stdin);


    for (int i = 0; i < max_size; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            counter++;
        }
    }


    printf("Essa frase tem %i vogais.\n", counter - 6);


    return 0;
}
