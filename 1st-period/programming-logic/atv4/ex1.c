/*1. **Verificar se um valor é nulo:**
Crie uma função que receba um valor e
informe se ele é positivo ou não.*/


#include <stdio.h>


const char* verify(int num)
{
    if (num > 0)
    {
        return "positivo";
    }
    else if (num < 0)
    {
        return "negativo";
    }
    else
    {
        return "nulo";
    }
}


int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);


    const char* result = verify(n);


    printf("Esse numero e %s.\n", result);


    return 0;
}

