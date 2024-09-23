#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *merge_sort(int *arr, int equerda, int direita);

void merge(int *arr, int esquerda, int meio, int direita);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = merge_sort(arr, 0, 5);

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


int *merge_sort(int *arr, int esquerda, int direita) 
{
    if (esquerda < direita) // Checa se o subarray tem mais de um elemento. Se não tiver, ele já está ordenado
    {
        int meio = esquerda + (direita - esquerda) / 2; // Encontra ponto médio do array
        merge_sort(arr, esquerda, meio);     // Ordena recursivamente as metades
        merge_sort(arr, meio + 1, direita);
        merge(arr, esquerda, meio, direita); // Junta as metades
    }

    return arr;
}


void merge(int *arr, int esquerda, int meio, int direita) 
{
    int i, j, k; // Variáveis de contagem
    int tam_esq = meio - esquerda + 1; // Tamanho do subarray esquerdo
    int tam_dir = direita - meio; // Tamanho do subarray direito

    // Arrays temporários
    int *ESQ = (int *)malloc(tam_esq * sizeof(int)); 
    int *DIR = (int *)malloc(tam_dir * sizeof(int));

    // Copiar os arrays
    for (i = 0; i < tam_esq; i++)
        ESQ[i] = arr[esquerda + i];
    for (j = 0; j < tam_dir; j++)
        DIR[j] = arr[meio + 1 + j];

    // Ordernar os elementos dos dois arrays e colocar no array original
    i = 0;
    j = 0;
    k = esquerda;
    while (i < tam_esq && j < tam_dir) 
    {
        if (ESQ[i] <= DIR[j]) 
        {
            arr[k] = ESQ[i];
            i++;
        } else 
        {
            arr[k] = DIR[j];
            j++;
        }
        k++;
    }

    // Copia os elementos que sobraram
    while (i < tam_esq) 
    {
        arr[k] = ESQ[i];
        i++;
        k++;
    }

    while (j < tam_dir) 
    {
        arr[k] = DIR[j];
        j++;
        k++;
    }

    // Liberar espaço na memória
    free(ESQ);
    free(DIR);
}