#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("file.txt", "w");

    fclose(arq);

    return 0;
}