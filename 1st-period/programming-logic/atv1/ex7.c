#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    float altura, peso, imc;

    puts("Indique sua altura em metros: ");
    scanf("%f", &altura);

    puts("Indique seu peso em kg: ");
    scanf("%f", &peso);
    
    imc = peso / altura;
    imc /= altura;

    if(imc < 17)
    {
        printf("Seu IMC e igual a %.2f e e classificado como muito abaixo do peso.", imc);
    }
    else if(imc >= 17 && imc < 18.5)
    {
        printf("Seu IMC e igual a %.2f e e classificado como abaixo do peso.", imc);
    }
    else if(imc >= 18.5 && imc < 25)
    {
        printf("Seu IMC e igual a %.2f e e classificado como normal.",
    imc);
    }
    else if(imc >= 25 && imc < 30)
    {
        printf("Seu IMC e igual a %.2f e e classificado como acima do peso.", imc);
    }
    else if(imc >= 30 && imc < 35)
    {
        printf("Seu IMC e igual a %.2f e e classificado como obesidade grau I.", imc);
    }
    else if(imc >= 35 && imc < 40)
    {
        printf("Seu IMC e igual a %.2f e e classificado como obesidade grau II.", imc);
    }
    else
    {
        printf("Seu IMC e igual a %.2f e e classificado como obesidade grau III.", imc);
    }

    return 0;
}