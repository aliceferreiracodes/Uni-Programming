#include <stdio.h>

int main()
{
    FILE *arq;
    char c;
    arq = fopen("file.txt", "r");

    if (arq)
    {
        while ((c = getc(arq)) != EOF) // get character until end of file
            printf("%c", c);
    }
    else   
        printf("Arquivo nao existe.\n");

    fclose(arq);

    return 0;
}