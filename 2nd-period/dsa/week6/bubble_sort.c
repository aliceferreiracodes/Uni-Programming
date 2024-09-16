#include <stdio.h>

int main()
{
    int arr[] = {2, 6, 65, 23, 5, 2, 15, 7, 23, 12, 14, 5, 7, 8, 3, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int placeholder;

    // comparar primeiro número com aquele à sua direita
    // se for maior, trocar a posição
    // se for menor, pular
    // iterar cada item do array
    // executar passos acima o número de vezes do tamanho do array
    // diminuir o número de comparações em 1 a cada iteração

    for (int i = 0; i < size; i++) // iterar o número de vezes do tamanho do array
    {
       for (int j = 0; j < size - i; j++) // iterar o número de vezes do tamanho do array menos 1 a cada iteração
        {
            if (arr[j] < arr[j + 1]) // se o número à esquerda for menor, continuar
                continue;
            else // se o número à esquerda for maior, inverter os valores
            {
                placeholder = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = placeholder;
            }
        } 
    }

    for (int i = 0; i < size; i++) // printar resultado
    {
        printf("%i\n", arr[i]);
    }

    return 0;
}