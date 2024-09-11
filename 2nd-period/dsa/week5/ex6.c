#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("arq.txt", "w");
    char c[100];

    if (arq)
    {
        printf("Digite qualquer coisa para registrar no arquivo ou 0 para sair: ");
        fgets(c, 100, stdin);

        while (c[0] != '0')
        {
            fputs(c, arq);
            printf("Digite qualquer coisa para registrar no arquivo ou 0 para sair: ");
            fgets(c, 100, stdin);
        }
    }
    else    
        printf("Arquivo nao existe.\n");

    fclose(arq);

    return 0;
}