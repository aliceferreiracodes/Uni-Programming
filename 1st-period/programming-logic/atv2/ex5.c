#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    //pedir ao usuario a quantidade de alunos
    int alunos;

    puts("Quantos alunos ha na sala? ");
    scanf("%i", &alunos);

    //pedir para ele inserir as notas uma de cada vez
    int n = 1;
    float nota, total;

    while(n <= alunos)
    {
        printf("Nota do aluno %i: ", n);
        scanf("%f", &nota);
        total += nota;
        n++;
    }
    
    //calcular a media aritmetica das notas e printar
    float ma = total / alunos;
    printf("A media aritmetica das notas dessa turma e igual a%.2f.\n", ma);
    
    return 0;
}
