/*Switch Case Desenvolva um programa que leia um número de 1 a 7 e imprima o dia
da semana correspondente, sendo 1 para Domingo.*/


#include <stdio.h>


int main(void)
{
    int dia;


    printf("Digite de 1 a 7 para saber a qual dia da semana ele corresponde: ");
    scanf("%i", &dia);


    switch (dia)
    {
        case 1:
            printf("Esse numero corresponde a domingo.\n");
            break;
        case 2:
            printf("Esse numero corresponde a segunda-feira.\n");
            break;
        case 3:
            printf("Esse numero corresponde a terca-feira.\n");
            break;
        case 4:
            printf("Esse numero corresponde a quarta-feira.\n");
            break;
        case 5:
            printf("Esse numero corresponde a quinta-feira.\n");
            break;
        case 6:
            printf("Esse numero corresponde a sexta-feira.\n");
            break;
        case 7:
            printf("Esse numero corresponde a sabado.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }


    return 0;
}
