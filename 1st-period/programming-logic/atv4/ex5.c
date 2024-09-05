/*5. **Retornar o maior valor entre 3
números:**
Crie uma função que receba 3 números
e retorne o maior valor, utilizando a
função da questão 4.*/


#include <stdio.h>


int maior(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
        return n1;
    else if (n2 > n3 && n2 > n1)
        return n2;
    else  
        return n3;
}


int main()
{
    int n1, n2, n3;
    printf("Digite tres numeros inteiros diferentes: ");


    printf("Numero 1: ");
    scanf("%i", &n1);


    printf("Numero 2: ");
    scanf("%i", &n2);


    printf("Numero 3: ");
    scanf("%i", &n3);


    printf("O maior numero e %i.\n", maior(n1, n2, n3));


    return 0;
}

