/*Exercício 3:
Crie uma matriz 4x4 e preencha-a com números aleatórios. Em
seguida, calcule e imprima a soma de cada linha e de cada
coluna.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int mat[4][4], matfinal[2][4] = {{0, 0, 0, 0}, {0, 0}};
    int max = 100, min = 1;
    srand(time(NULL));


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j] = (rand() % (max - min + 1)) + min;
        }
    }


    matfinal[0][0] = mat[0][0] + mat[0][1] + mat[0][2] + mat[0][3];
    matfinal[0][1] = mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3];
    matfinal[0][2] = mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3];
    matfinal[0][3] = mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3];


    matfinal[1][0] = mat[0][0] + mat[1][0] + mat[2][0] + mat[3][0];
    matfinal[1][1] = mat[0][1] + mat[1][1] + mat[2][1] + mat[3][1];
    matfinal[1][2] = mat[0][2] + mat[1][2] + mat[2][2] + mat[3][2];
    matfinal[1][3] = mat[0][3] + mat[1][3] + mat[2][3] + mat[3][3];


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matfinal[i][j]);
        }
        printf("\n");
    }


    return 0;
}
