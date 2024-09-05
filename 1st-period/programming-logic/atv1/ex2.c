#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    int n;
    puts("Digite um numero para saber se ele e par ou impar: \n");
    scanf("%i", &n);

    if(n % 2 == 0)
    {
        printf("%i e um numero par.\n", n);
    }
    else
    {
        printf("%i e um numero impar.\n", n);
    }
    
    return 0;
}
