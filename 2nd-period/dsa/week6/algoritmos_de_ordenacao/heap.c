#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int *gerar_lista(int tamanho);

int *heap_sort(int *arr, int tamanho);


int main()
{
    int *arr = gerar_lista(6);

    printf("Lista desordenada: "); // Printar lista desordenada
    for (int i = 0; i < 6; i++)
        printf("%i ", arr[i]);

        
    arr = heap_sort(arr, 6);

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


void heapify(int *arr, int n, int raiz) {
    int maior = raiz; // Inicializa a raiz
    int esquerda = 2 * raiz + 1; // Índice do filho esquerdo
    int direita = 2 * raiz + 2; // Índice do filho direito

    if (esquerda < n && arr[esquerda] > arr[maior]) // Verifica se o filho esquerdo do nó raiz é maior que o nó raiz
        maior = esquerda;

    if (direita < n && arr[direita] > arr[maior]) // Verifica se o filho direito do nó raiz é maior que o maior até agora
        maior = direita;

    if (maior != raiz) // Se o maior não for a raiz, troca os valores e ajusta recursivamente o heap
    {
        int temp = arr[raiz];
        arr[raiz] = arr[maior];
        arr[maior] = temp;

        heapify(arr, n, maior);
    }
}

int *heap_sort(int *arr, int tamanho) {
    for (int raiz = tamanho / 2 - 1; raiz >= 0; raiz--) // Faz o heap
        heapify(arr, tamanho, raiz);

    // Tira a raiz do heap e refaz o heap
    for (int raiz = tamanho - 1; raiz > 0; raiz--) {
        int temp = arr[0]; // Move a raiz para o fim
        arr[0] = arr[raiz];
        arr[raiz] = temp;

        heapify(arr, raiz, 0); // Faz o heap novamente com o restante dos elementos
    }

    return arr;
}