/*Matrizes (Arrays Bidimensionais) Crie um programa que leia uma matriz quadrada de
ordem n (onde n é lido pelo usuário) e calcule a soma dos elementos da diagonal
principal.*/


#include <stdio.h>


int main(void)
{
    int mat[2][2];


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite um valor para a posicao %i : %i da matriz: ", i + 1, j + 1);
            scanf("%i", &mat[i][j]);
        }
    }


    printf("A soma dos elementos da diagonal principal dessa matriz e igual a %i.\n", mat[0][0] + mat[1][1]);


    return 0;
}
