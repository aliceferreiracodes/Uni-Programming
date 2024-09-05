#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int n;
    puts("Digite um numero para saber se e positivo, negativo ou zero: \n");
    scanf("%i", &n);
    
    if(n > 0)
    {
        printf("%i e positivo.\n", n);
    }
    else if(n < 0)
    {
        printf("%i e negativo.\n", n);
    }
    else
    {
        printf("%i e nulo.\n", n);
    }

    return 0;
}
