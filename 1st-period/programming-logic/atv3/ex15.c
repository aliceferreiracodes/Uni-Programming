/*Comando de Controle de Desvio e Vetores Escreva um programa que preencha um
vetor com 10 números inteiros e depois imprima apenas os números positivos.*/


#include <stdio.h>


int main(void)
{
    int arr[10];


    for (int i = 0; i < 10; i++)
    {
        printf("Digite qualquer numero inteiro para a posicao %i do vetor: ", i + 1);
        scanf("%i", &arr[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            printf("%i\n", arr[i]);
        }
    }


    return 0;
}
