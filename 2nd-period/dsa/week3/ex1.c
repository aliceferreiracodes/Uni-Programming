#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 50

struct Player
{
    char simbolo;
    char nome[MAX_SIZE];
};

void ler_nome(struct Player *p, int player_num);

void ler_simbolo(struct Player *p);

void rodadas();


int main()
{
    // representar os jogadores (nome e símbolo X ou O)
    struct Player p1;
    struct Player p2;

    printf("\n    - JOGO DA VELHA -    \n");
    printf("\n-> Para jogar, preencha as informacoes dos jogadores:\n");

    // Jogador 1
    ler_nome(&p1, 1);
    do
    {
        ler_simbolo(&p1);
        if (p1.simbolo != 'X' && p1.simbolo != 'O')
            printf("Simbolo invalido. Escolha entre X ou O.\n");
    } while (p1.simbolo != 'X' && p1.simbolo != 'O');

    // Jogador 2
    ler_nome(&p2, 2);
    if (p1.simbolo == 'X')
        p2.simbolo = 'O';
    else
        p2.simbolo = 'X';

    // permitir que os jogadores escolham uma posição para posicionar sua jogada
        // criar o tabuleiro
        // printar o tabuleiro vazio
        // informar as posições disponíveis

    char tabuleiro[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};

    printf("\n\n-> Instrucoes do jogo:\n");
    printf("\nO tabuleiro do jogo da velha e ordenado em linhas e colunas. Os espacos preenchidos com \"_\" sao os espacos disponiveis para posicionar uma jogada. Para posicionar sua jogada, informe o espaco desejado no formato:\n");
    printf("- \"1x1\" (primeira linha e primeira coluna)\n");
    printf("- \"1x2\" (primeira linha e segunda coluna)\n");
    printf("- Etc\n");

    printf("\n\n-> Rodada 1\n\n");

    printf("   1  2  3\n"); // indice de colunas
    for (int i = 0; i < 3; i++)
    {
        printf("%i  ", i + 1); // indice de linhas
        for (int j = 0; j < 3; j++)
        {
            printf("%c  ", tabuleiro[i][j]); // exibir elementos do tabuleiro
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tabuleiro[i][j] == '_')
            {
                printf("%ix%i ", i + 1, j + 1);
            }
        }
    }

    // representação do jogo
    // informar quem ganhou e se foi empate
}


void ler_nome(struct Player *p, int player_num)
{
    printf("\nJogador %i\n", player_num);
    printf("Nome: ");
    if (fgets(p->nome, MAX_SIZE, stdin) != NULL)
    {
        size_t len = strlen(p->nome);
        if (len > 0 && p->nome[len - 1] == '\n') 
            p->nome[len - 1] = '\0';
    }
}


void ler_simbolo(struct Player *p)
{
    printf("Simbolo: ");
    scanf("%c", &p->simbolo);
    getchar();
    p->simbolo = toupper(p->simbolo);
}


void rodadas()
{
    
}