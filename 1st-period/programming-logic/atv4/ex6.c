/*6. **Retornar o menor valor entre 3
números:**
Crie uma função que receba 3 números
e retorne o menor valor, utilizando a
função da questão 5.*/


#include <stdio.h>


int menor(int n1, int n2, int n3)
{
    if (n1 < n2 && n1 < n3)
        return n1;
    else if (n2 < n3 && n2 < n1)
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


    printf("O menor numero e %i.\n", menor(n1, n2, n3));


    return 0;
}
