#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *selection_sort(int *arr);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = selection_sort(arr);

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


int *selection_sort(int *arr)
{
    for (int i = 0; i < 6 - 1; i++) // Itera por toda a lista
    {
        int min = i;
        for (int j = i + 1; j < 6; j++) // Procura pelo menor número na lista
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min]; // Troca os elementos
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    return arr;
}