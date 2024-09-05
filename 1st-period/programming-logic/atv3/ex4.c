/*Switch case, While, do while, if, if else, For, Comando de controle de desvio e
Vetores Desenvolva um programa que utilize um menu para realizar operações em um
vetor de inteiros. As operações devem incluir inserção, remoção, exibição e busca de
elementos.*/


#include <stdio.h>


#define MAX_SIZE 100


// Função para exibir o menu
void exibirMenu() {
    printf("\nEscolha uma opção:\n");
    printf("1. Inserir elemento\n");
    printf("2. Remover elemento\n");
    printf("3. Exibir vetor\n");
    printf("4. Buscar elemento\n");
    printf("5. Sair\n");
    printf("Opção: ");
}


// Função para inserir um elemento no vetor
void inserirElemento(int vetor[], int *tamanho, int valor) {
    if (*tamanho < MAX_SIZE) {
        vetor[*tamanho] = valor;
        (*tamanho)++;
        printf("Elemento inserido com sucesso.\n");
    } else {
        printf("O vetor está cheio. Não é possível inserir mais elementos.\n");
    }
}


// Função para remover um elemento do vetor
void removerElemento(int vetor[], int *tamanho, int valor) {
    int i, encontrado = 0;
    for (i = 0; i < *tamanho; i++) {
        if (vetor[i] == valor) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        for (; i < *tamanho - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        (*tamanho)--;
        printf("Elemento removido com sucesso.\n");
    } else {
        printf("Elemento não encontrado no vetor.\n");
    }
}


// Função para exibir o vetor
void exibirVetor(int vetor[], int tamanho) {
    printf("Vetor:");
    for (int i = 0; i < tamanho; i++) {
        printf(" %d", vetor[i]);
    }
    printf("\n");
}


// Função para buscar um elemento no vetor
void buscarElemento(int vetor[], int tamanho, int valor) {
    int i, encontrado = 0;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        printf("Elemento encontrado na posição %d.\n", i);
    } else {
        printf("Elemento não encontrado no vetor.\n");
    }
}


int main() {
    int vetor[MAX_SIZE];
    int tamanho = 0;
    int opcao, elemento;


    do {
        exibirMenu();
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elemento);
                inserirElemento(vetor, &tamanho, elemento);
                break;
            case 2:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elemento);
                removerElemento(vetor, &tamanho, elemento);
                break;
            case 3:
                exibirVetor(vetor, tamanho);
                break;
            case 4:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elemento);
                buscarElemento(vetor, tamanho, elemento);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(opcao != 5);


    return 0;
}
