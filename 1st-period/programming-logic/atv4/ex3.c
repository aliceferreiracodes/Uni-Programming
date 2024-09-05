/*3. **Retornar o maior valor entre dois
números:**
Crie uma função que receba 2 números
e retorne o maior valor.*/


#include <stdio.h>


int maior(int n1, int n2)
{
    if (n1 > n2)
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


    printf("O maior numero e %i.\n", maior(n1, n2));


    return 0;
}

