#include <stdio.h>

int main()
{
    int n = 1;
    printf("Valor: %i\n", n);
    printf("Posicao (decimal): %d\n", &n);
    printf("Posicao (hexadecimal): %p\n", &n);
}