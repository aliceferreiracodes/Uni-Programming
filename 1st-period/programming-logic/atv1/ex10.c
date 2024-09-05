#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    int i = 1;
    int tab = 0;

    printf("Qual tabuada deseja ver? ");
    scanf("%i", &tab);

    while(i <= 10)
    {
        printf("%i x %i = %i\n", tab, i, tab * i);
        i++;
    }
    
    return 0;
}