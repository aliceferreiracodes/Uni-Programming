/*Operadores de Entrada e Saída de Dados Escreva um programa que leia o nome e a
idade de uma pessoa e depois imprima esses dados.*/


#include <stdio.h>
#include <string.h>


#define max_size 100


int main(void)
{
    char nome[max_size];
    int idade;


    printf("Digite seu nome: ");
    fgets(nome, max_size, stdin);


    printf("Digite sua idade: ");
    scanf("%i", &idade);


    printf("Seu nome e %s e sua idade e %i.\n", nome, idade);


    return 0;
}
