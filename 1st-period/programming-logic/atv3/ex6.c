/*Strings e Funções de Biblioteca Implemente um programa que leia uma string (nome)
e exiba o comprimento da string (número de caracteres).*/


#include <stdio.h>
#include <string.h>


#define max_size 10


int main(void)
{
    char palavra[max_size];
    printf("Digite uma palavra de no maximo 10 caracteres: ");
    fgets(palavra, max_size, stdin);
    int counter = 0;


    for (int i = 0; i < sizeof(palavra); i++)
    {
        if (palavra[i] != '\n')
        {
            counter++;
        }
        else
        {
            printf("O tamanho dessa palavra e %i.\n", counter);
            return 0;
        }
    }
}
