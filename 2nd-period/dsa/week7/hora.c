#include <stdio.h>


typedef struct Hora {
    int hora;
    int minuto;
    int segundo;
    int codigo;
} Hora;


Hora achar_maior(Hora *lista, int tamanho);
Hora achar_maior_minuto(Hora minuto1, Hora minuto2);
Hora achar_maior_segundo(Hora segundo1, Hora segundo2);

Hora achar_menor(Hora *lista, int tamanho);
Hora achar_menor_minuto(Hora minuto1, Hora minuto2);
Hora achar_menor_segundo(Hora segundo1, Hora segundo2);


int main()
{
    Hora lista_horas[5];
    Hora maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite um horario, informando hora, minuto e segundo a seguir:\n");
        printf("Hora: ");
        scanf("%i", &lista_horas[i].hora);
        getchar();

        printf("Minuto: ");
        scanf("%i", &lista_horas[i].minuto);
        getchar();

        printf("Segundo: ");
        scanf("%i", &lista_horas[i].segundo);
        getchar();

        lista_horas[i].codigo = i;
    }

    maior = achar_maior(lista_horas, 5);
    menor = achar_menor(lista_horas, 5);

    printf("\nA maior hora e %ih %imin %iseg\n", maior.hora, maior.minuto, maior.segundo);
    printf("A menor hora e %ih %imin %iseg\n", menor.hora, menor.minuto, menor.segundo);

    return 0;
}


Hora achar_maior(Hora *lista, int tamanho)
{
    Hora maior = lista[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (lista[i].hora > maior.hora)
        {
            maior = lista[i];
        }
        else if (lista[i].hora = maior.hora)
        {
            maior = achar_maior_minuto(lista[i], maior);
        }
    }

    return maior;
}


Hora achar_maior_minuto(Hora hora1, Hora hora2)
{
    Hora maior;

    if (hora1.minuto > hora2.minuto)
    {
        maior = hora1;
    }
    else if (hora1.minuto < hora2.minuto)
    {
        maior = hora2;
    }
    else
    {
        return achar_maior_segundo(hora1, hora2);
    }

    return maior;
}


Hora achar_maior_segundo(Hora hora1, Hora hora2)
{
    Hora maior;

    if (hora1.segundo >= hora2.segundo)
    {
        maior = hora1;
    }
    else if (hora1.segundo <= hora2.segundo)
    {
        maior = hora2;
    }

    return maior;
}


Hora achar_menor(Hora *lista, int tamanho)
{
    Hora menor = lista[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (lista[i].hora < menor.hora)
        {
            menor = lista[i];
        }
        else if (lista[i].hora = menor.hora)
        {
            menor = achar_menor_minuto(lista[i], menor);
        }
    }

    return menor;
}


Hora achar_menor_minuto(Hora hora1, Hora hora2)
{
    Hora menor;

    if (hora1.minuto < hora2.minuto)
    {
        menor = hora1;
    }
    else if (hora1.minuto > hora2.minuto)
    {
        menor = hora2;
    }
    else
    {
        return achar_menor_segundo(hora1, hora2);
    }

    return menor;
}


Hora achar_menor_segundo(Hora hora1, Hora hora2)
{
    Hora menor;

    if (hora1.segundo <= hora2.segundo)
    {
        menor = hora1;
    }
    else if (hora1.segundo >= hora2.segundo)
    {
        menor = hora2;
    }

    return menor;
}