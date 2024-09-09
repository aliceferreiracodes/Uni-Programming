#include <stdio.h>

void incrementa(int *valor)
{
    printf("Antes de incrementar\n");
    printf("O contador vale %i\n", (*valor));
    printf("O endereco de memoria e %p\n\n", valor);
    printf("Depois de incrementar\n");
    printf("O contador vale %i\n", ++(*valor));
    printf("O endereco de memoria e %p\n\n", valor);
}

int main()
{
    int cont = 10;

    printf("Antes de incrementar\n");
    printf("O contador vale %i\n", cont);
    printf("O endereco de memoria e %p\n\n", &cont);

    incrementa(&cont);

    printf("Depois de incrementar\n");
    printf("O contador vale %i\n", cont);
    printf("O endereco de memoria e %p\n\n", &cont);
     
    return 0;
}