/*Variáveis e Operadores aritméticos Crie um programa que calcule a média aritmética
de três notas e determine se o aluno está aprovado (média >= 6).*/


#include <stdio.h>


int main(void)
{
    float n1, n2, n3, media;
    puts("Digite 3 notas para calcular sua media.\n");


    printf("Nota 1: ");
    scanf("%f", &n1);


    printf("Nota 2: ");
    scanf("%f", &n2);


    printf("Nota 3: ");
    scanf("%f", &n3);


    media = (n1 + n2 + n3) / 3;


    printf("Sua media e %.2f. ", media);


    if (media >= 7)
    {
        printf("Voce esta aprovado(a).\n");
    }
    else
    {
        printf("Voce esta reprovado(a).\n");
    }
   
    return 0;
}
