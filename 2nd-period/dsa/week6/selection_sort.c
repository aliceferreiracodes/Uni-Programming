#include <stdio.h>

int main()
{
    int arr[] = {2, 6, 65, 23, 5, 2, 15, 7, 23, 12, 14, 5, 7, 8, 3, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int placeholder;
    int menor_num = arr[0];

    // atribuir primeiro número como menor número
    // iterar todo o array
    // comparar cada número com o menor
    // se o número for menor do que o atual menor número, atribuí-lo como menor
    // trocar o menor com o primeiro número
    // iterar o número de vezes do array menos 1 a cada iteração

    for (int i = 0; i < size; i++) // iterar o número de vezes do tamanho do array
    {
        for (int j = 0; j < size - i; j++) // iterar o número de vezes do tamanho do array menos 1 a cada iteração
        {
            if (arr[j] >= menor_num)
                continue;
            else
            {
                menor_num = arr[j];
            }
        }

        placeholder = arr[i];
        arr[i] = menor_num;
        arr[i + 1] = placeholder;
    }

    for (int i = 0; i < size; i++) // printar resultado
    {
        printf("%i\n", arr[i]);
    }

    return 0;
}