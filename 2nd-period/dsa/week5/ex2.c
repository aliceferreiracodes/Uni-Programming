#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("file.txt", "r");

    if (arq)
        printf("Arquivo existe.\n");
    else
        printf("Arquivo nao existe.\n");

    fclose(arq);

    return 0;
}