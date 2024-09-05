#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int n1, n2, n3, max;

    puts("Digite tres numeros para saber qual e o maior deles.\n");

    puts("Numero 1: \n");
    scanf("%i", &n1);

    puts("Numero 2: \n");
    scanf("%i", &n2);

    puts("Numero 3: \n");
    scanf("%i", &n3);

    if(n1 > n2 && n1 > n3)
    {
        max = n1;
    }
    else if(n2 > n1 && n2 > n3)
    {
        max = n2;
    }
    else
    {
        max = n3;
    }

    printf("O maior numero e %i.\n", max);
    
    return 0;
}