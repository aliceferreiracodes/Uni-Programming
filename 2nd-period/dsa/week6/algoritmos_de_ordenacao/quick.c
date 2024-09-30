#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *quick_sort(int *arr, int inicio, int fim);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = quick_sort(arr, 0, 5);

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


void trocar(int *a, int *b) 
{
    // Troca dois elementos
    int t = *a;
    *a = *b;
    *b = t;
}

int particao(int *arr, int inicio, int fim) 
{
    int pivot = arr[fim]; 
    int i = (inicio - 1); // Índice do menor elemento
    for (int j = inicio; j <= fim - 1; j++) 
    {
        if (arr[j] < pivot) // Move o elemento menor para a esquerda
        {
            i++;
            trocar(&arr[i], &arr[j]); 
        }
    }

    trocar(&arr[i + 1], &arr[fim]); // Coloca o pivot na posição correta
    return (i + 1); // Retorna o índice do pivot
}

int *quick_sort(int *arr, int inicio, int fim) 
{
    if (inicio < fim) 
    {
        int pivot = particao(arr, inicio, fim); // Ordena os elementos menores à esquerda e os maiores à direita do pivot
        quick_sort(arr, inicio, pivot - 1);  // Subarray à esquerda do pivot
        quick_sort(arr, pivot + 1, fim); // Subarray à direita do pivot
    }

    return arr;
}