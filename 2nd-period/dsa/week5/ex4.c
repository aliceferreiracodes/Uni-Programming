#include <stdio.h>

int main()
{
    FILE *arq;
    char nome[10], *result;
    arq = fopen("file.txt", "r");

    if (arq)
    {
        while (!feof(arq)) // file end of file
        {
            fgets(nome, 10, arq);
            printf("%s", nome);
        }
    }
    else    
        printf("Arquivo nao existe.\n");

    fclose(arq);

    return 0;
}