/*8. **Conversão entre temperaturas
Celsius e Fahrenheit:**
Crie um aplicativo que permita ao
usuário escolher entre entrar com a
temperatura em Celsius ou Fahrenheit. A
conversão é realizada através de um
comando `switch`.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


float converter(float temp, char scale)
{
    switch (scale)
    {
    case 'F':
        return (temp - 32) * 5 / 9;
        break;
    case 'C':
        return temp * 9 / 5 + 32;
        break;
    default:
        break;
    }
}


int main()
{
    char option, conversion;
    float inputtemp, result;


    printf("Qual temperatura de entrada voce deseja? (Digite 'F' para Fahrenheit e 'C' para Celsius)\n");
    scanf(" %c", &option);
    getchar();
    option = toupper(option);


    printf("Digite a temperatura a ser convertida: ");
    scanf("%f", &inputtemp);
    getchar();


    if (option == 'F')
        conversion = 'C';
    else  
        conversion = 'F';


    result = converter(inputtemp, option);


    printf("%.2f graus %c equivalem a %.2f graus %c.\n", inputtemp, option, result, conversion);


    return 0;
}

