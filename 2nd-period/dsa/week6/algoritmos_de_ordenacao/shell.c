#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *shell_sort(int *arr, int tamanho);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = shell_sort(arr, 6);

    printf("\nLista ordenada: "); // Printar lista ordenada
    for (int i = 0; i < 6; i++)
            printf("%i ", arr[i]);
    
    free(arr);

    return 0;
}


int *gerar_lista(int tamanho)
{
    int *arr = (int *)malloc(tamanho * sizeof(int)); // Alocação da lista

    if (arr == NULL) // Lidar com erros
    {
        printf("Erro ao criar a lista.\n");
        exit(1);
    }

    srand(time(NULL)); // Atribuição de números aleatórios
    for (int i = 0; i < 6; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    return arr;
}


int *shell_sort(int *arr, int tamanho) 
{
    for (int gap = tamanho / 2; gap > 0; gap /= 2) // Define o intervalo entre os elementos que serão ordenados
    {
        for (int i = gap; i < tamanho; i++) // Faz insertion sort em cada sub_array
        {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) // Move os elementos
                arr[j] = arr[j - gap];

            arr[j] = temp; // Insere os elementos no lugar correto
        }
    }

    return arr;
}