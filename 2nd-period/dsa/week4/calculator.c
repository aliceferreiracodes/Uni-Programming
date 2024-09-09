#include <stdio.h>

void operacao(float *n1, float *n2, int opt);

int main()
{
    int option;
    float valor1, valor2;

// pedir para o usuário escolher a operação
    printf("\n   - CALCULADORA -   \n\n");
    printf("-> Escolha uma das operacoes abaixo:\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - divisao\n");
    printf("4 - multiplicacao\n");
    printf("-> Qual operacao voce quer realizar? Digite o numero correspondente: ");
    scanf("%i", &option);
    getchar();

// pedir valores para o usuário
    printf("\n-> Agora, digite os dois valores a serem usados na operacao.\n");
    printf("Valor 1: ");
    scanf("%f", &valor1);
    getchar();

    printf("Valor 2: ");
    scanf("%f", &valor2);
    getchar();

    operacao(&valor1, &valor2, option);

    return 0;
}


void operacao(float *n1, float *n2, int opt)
{
    float result;

    switch (opt)
    {
    case 1:
        printf("O resultado e %.2f", ((*n1) + (*n2)));
        break;
        
    case 2:
        printf("O resultado e %.2f", ((*n1) - (*n2)));
        break;

    case 3:
        if (*n2 == 0)
            printf("O valor do denominador nao pode ser igual a zero.\n");
        else
            printf("O resultado e %.2f", ((*n1) / (*n2)));
        break;

    case 4:
        printf("O resultado e %.2f", ((*n1) * (*n2)));
        break;
    
    default:
    printf("Opcao invalida.\n");
        break;
    }
}