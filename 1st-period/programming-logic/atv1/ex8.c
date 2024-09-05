#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void)
{
    float c, f;

    puts("Digite uma temperatura em graus Celsius para ser convertida paraFahrenheit: ");
    scanf("%f", &c);

    f = c * 9 / 5 + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.", c, f);
    
    return 0;
}
