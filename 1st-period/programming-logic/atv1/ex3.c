#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int ano;

    puts("Digite um ano para saber se ele e bissexto ou nao: \n");
    scanf("%i", &ano);

    if(ano % 4 == 0)
    {
        printf("%i e um ano bissexto.\n", ano);
    }
    else
    {
        printf("%i nao e um ano bissexto.\n", ano);
    }
    
    return 0;
}