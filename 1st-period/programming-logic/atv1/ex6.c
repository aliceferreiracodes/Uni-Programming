#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    //solicitar 3 comprimentos
    //verificar se sao um triangulo valido
    int l1, l2, l3;
    
    puts("Digite 3 comprimentos, um para cada lado de um triangulo.");

    puts("Lado 1: ");
    scanf("%i", &l1);

    puts("Lado 2: ");
    scanf("%i", &l2);

    puts("Lado 3: ");
    scanf("%i", &l3);

    if((l1 + l2) > l3 && (l1 + l3) > l2 && (l2 + l3) > l2)
    {
        puts("Triangulo valido.");
    }
    else
    {
        puts("Triangulo invalido.");
    }

    return 0;
}