/*Exercício 1:
Crie uma matriz 3x3 para armazenar números inteiros. Preencha
a matriz com valores fornecidos pelo usuário e depois exiba a
matriz na tela.*/


#include <stdio.h>


int main(void)
{
    int mat[3][3];


    printf("Digite valores para as seguintes posicoes da matriz:\n");


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Linha %i, coluna %i: ", i + 1, j + 1);
            scanf("%i", &mat[i][j]);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}