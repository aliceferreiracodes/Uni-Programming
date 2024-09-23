#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *insertion_sort(int *arr);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = insertion_sort(arr);

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


int *insertion_sort(int *arr)
{
    for (int i = 1; i < 6; i++) 
    {
        int key = arr[i]; // Seleciona o próximo elemento para ordenar
        int j = i - 1;
        while (j >= 0 && arr[j] > key) // Move os elementos maiores para a parte não ordenada da lista
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Coloca key na posição correta
    }
    
    
    return arr;
}