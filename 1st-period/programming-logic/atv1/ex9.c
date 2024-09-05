#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    int n;

    puts("Digite um numero inteiro positivo: ");
    scanf("%i", &n);

    while(n > 0)
    {
        printf("%i\n", n);
        n--;
    }
    
    return 0;
}