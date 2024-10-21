#include <stdio.h>


int main()
{
    float f, c;

    printf("\nDigite uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    getchar();

    c = (f - 32) * 5 / 9;

    printf("\n%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", f, c);

    return 0;
}