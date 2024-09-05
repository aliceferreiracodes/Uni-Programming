/*4. **Retornar o menor valor entre dois
números:**
Crie uma função que receba 2 números
e retorne o menor valor.*/


#include <stdio.h>


int menor(int n1, int n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}


int main()
{
    int n1, n2;
    printf("Digite dois numeros inteiros diferentes: ");


    printf("Numero 1: ");
    scanf("%i", &n1);


    printf("Numero 2: ");
    scanf("%i", &n2);


    printf("O menor numero e %i.\n", menor(n1, n2));


    return 0;
}
