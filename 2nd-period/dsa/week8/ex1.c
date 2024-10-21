/* Crie um programa que inicialize uma lista encadeada e realize uma busca para verificar
se um item x está nessa lista */

#include <stdio.h>


typedef struct Node {
    int info;
    Node *next;
} Node;


Node adicionar_node(Node *start);
void buscar(Node *start);


int main()
{
    Node *start = NULL;

    int option;

    printf("\n- LISTA ENCADEADA -\n");
    printf("\n1 - Inserir elemento na lista\n");
    printf("2 - Buscar elemento na lista\n");
    printf("\n-> Insira o numero correspondente a operacao que deseja realizar: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        adicionar_node(start);
        break;
    
    default:
        break;
    }

    return 0;
}


Node adicionar_node(Node *start)
{
    int value;
    printf("\nInsira um valor numerico para o node: ");
    scanf("%i", &value);
    getchar();

    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    new_node->info = value;

    Node *ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    
    ptr->next = new_node;
    new_node->next = NULL;
}


void buscar(Node *start)
{
    int search_value;
    printf("\nInsira o elemento que deseja buscar: ");
    scanf("%i", &search_value);
    getchar();

    Node *ptr = start;
    int position = 1;
  
    while (ptr != NULL)
    {
        position++;
        ptr = ptr->next;
    }
    
    if (ptr==NULL)
    {
        printf("%i nao foi encontrado na lista.\n", search_value);
    }
    else
    {
        printf("%i foi encontrado na posicao %i da lista.\n", search_value, position);
    }
}
