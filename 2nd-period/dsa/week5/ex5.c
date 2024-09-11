#include <stdio.h>

int main()
{
    FILE *arq;
    char nome[10];
    arq = fopen("file.txt", "w");

    if (arq)
    {
        printf("Digite um nome ou 0 para sair: ");
        fgets(nome, 10, stdin);

        while (nome[0] != '0')
        {
            fputs(nome, arq);
            printf("Digite um nome ou 0 para sair: ");
            fgets(nome, 10, stdin);
        }
    }
    else
        printf("Arquivo nao existe.\n");

    fclose(arq);

    return 0;
}