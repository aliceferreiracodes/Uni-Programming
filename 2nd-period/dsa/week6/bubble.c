#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *bubble_sort(int *arr);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = bubble_sort(arr);

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


int *bubble_sort(int *arr)
{
    // Declaração de variáveis -> i: contagem | temp: placeholder para elemento da lista | fez_troca: verifica se troca foi feita ou não
    int i, temp;
    bool fez_troca = true;

    while (fez_troca == true) // Itera enquanto a lista ainda não estiver ordenada
    {
        fez_troca = false;
        for (i = 1; i <= 6 - 1; i++) // Itera por toda a lista
        {
            if (arr[i - 1] > arr[i]) // Checa se os elementos estão desordenados
            {
                temp = arr[i];       // Faz a troca
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;                
                fez_troca = true;  
            }                            
        }
    }

    return arr;
}