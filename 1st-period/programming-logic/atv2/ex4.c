
/*Exercício 4:
Crie uma matriz 3x3 e realize a multiplicação de todos os seus
elementos por um valor fornecido pelo usuário. Exiba a matriz
resultante.*/


#include <stdio.h>


int main(void)
{
    int mat[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int n;
    printf("Digite um valor para multiplicar os termos da matriz: ");
    scanf("%i", &n);


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = mat[i][j] * n;
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
