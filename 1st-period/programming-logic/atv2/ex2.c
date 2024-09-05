/*Exercício 2:
Crie duas matrizes 2x2 e realize a soma entre elas. Armazene o
resultado em uma terceira matriz e exiba o resultado na tela.*/


#include <stdio.h>


int main(void)
{
    int mat1[2][2] = {{2, 2}, {3, 3}};
    int mat2[2][2] = {{4, 4}, {5, 5}};
    int mat3[2][2];


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", mat3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
