/*2. **Equação do segundo grau:**
Crie uma função que receba três
valores, 'a', 'b' e 'c', que são os
coeficientes de uma equação do segundo
grau, e retorne o valor do delta, dado por
Delta = b^2 - 4ac.*/


#include <stdio.h>


int delta(int a, int b, int c)
{
    return (b * b) - 4 * a * c;
}


int main()
{
    int a, b, c;
    printf("Digite tres coeficientes inteiros para uma funcao do segundo grau: ");


    printf("Valor 1: ");
    scanf("%i", &a);


    printf("Valor 2: ");
    scanf("%i", &b);


    printf("Valor 3: ");
    scanf("%i", &c);


    int result = delta(a, b, c);


    printf("O valor de delta para esses tres coeficientes e %i.\n", result);


    return 0;
}
