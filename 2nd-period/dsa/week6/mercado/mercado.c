#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct // Struct Produto
{
    int codigo; 
    char nome[30]; 
    double preco; 

} Produto;

typedef struct // Struct Carrinho
{ 
    Produto produto; 
    int quantidade; 
    
} Carrinho;

// Variáveis globais
int itens_cadastrados = 0; // itens_cadastrados: armazena o atual número de intens na lista de produtos cadastrados
int itens_ld = 0; // itens_ld: armazena o atual número de intens na lista de desejos
int itens_carrinho = 0; // itens_carrinho: armazena o atual número de intens no carrinho


// Declaração das funções
int menu(); // Exibe o menu do programa

Produto cadastrar_produto(int tam_lista); // Cadastra produto na lista de itens do mercado

void listar_produtos(Produto *lista, int inicio, int fim); // Exibe informações de produtos em determinado intervalo da lista

void pegar_produto_por_codigo(Produto *lista, int tam_lista); // Busca por produto na lista de cadastrados

void remover_produto(Produto *lista, int tam_lista); // Remove produto informado por código

void add_lista_de_desejos(Produto *cadastrados, Produto *lista_desejos, int n_cadastrados, int n_lista_desejos); // Adiciona item à lista de desejos
 
void buscar_ld(Produto *lista, int tam_lista); // Busca por produto na lista de desejos

void remover_ld(Produto *lista, int tam_lista); // Remove produto da lista de desejos

void comprar_produto(Produto *cadastrados, Carrinho *lista_carrinho, int n_cadastrados, int n_carrinho); // Adiciona produto ao carrinho

void visualizar_carrinho(Carrinho *lista, int inicio, int fim); // Exibe itens do carrinho

void remover_carrinho(Carrinho *lista, int tam_carrinho); // Remove um item do carrinho

void tem_no_carrinho(Carrinho *lista, int tam_carrinho); // Busca item no carrinho

void fechar_pedido(Carrinho *lista, int tam_carrinho); // Fecha o pedido e calcula o valor total da compra


// Função principal
int main()
{
    // Criação de lista de produtos, carrinho e a funcionalidade extra lista de desejos
    Produto produtos[50];
    Carrinho carrinho[50];
    Produto lista_de_desejos[50];
    int opcao;  // Variável opcao: para escolher ação
    

    while(1)
    {
        if (opcao == 14)
            break;

        opcao = menu();

        switch (opcao)
        {
            case 1:
            // Cadastrar produto
                produtos[itens_cadastrados] = cadastrar_produto(itens_cadastrados);
                break;

            case 2:
            // Listar produtos da lista de cadastrados
                printf("\n-> Lista de produtos cadastrados:\n");
                listar_produtos(produtos, 0, itens_cadastrados);
                break;

            case 3:
            // Buscar produto na lista de cadastrados
                pegar_produto_por_codigo(produtos, itens_cadastrados);
                break;

            case 4:
            // Remover produto da lista de cadastrados
                remover_produto(produtos, itens_cadastrados);
                break;

            case 5:
            // Adicionar na lista de desejos
                add_lista_de_desejos(produtos, lista_de_desejos, itens_cadastrados, itens_ld);
                break;

            case 6:
            // Ver lista de desejos
                printf("\n-> Lista de desejos:\n");
                listar_produtos(lista_de_desejos, 0, itens_ld);
                break;

            case 7:
            // Buscar na lista de desejos
                buscar_ld(lista_de_desejos, itens_ld);
                break;

            case 8:
            // Remover da lista de desejos
                remover_ld(lista_de_desejos, itens_ld);
                break;

            case 9:
            // Adicionar no carrinho de compras
                comprar_produto(produtos, carrinho, itens_cadastrados, itens_carrinho);
                break;

            case 10:
            // Ver carrinho de compras
                printf("\n-> Lista de produtos do carrinho:\n");
                visualizar_carrinho(carrinho, 0, itens_carrinho);
                break;

            case 11:
            // Buscar no carrinho de compras
                tem_no_carrinho(carrinho, itens_carrinho);
                break;

            case 12:
            // Remover do carrinho de compras
                remover_carrinho(carrinho, itens_carrinho);
                break;

            case 13:
            // Fechar compra
                fechar_pedido(carrinho, itens_carrinho);
                break;

            case 14:
                printf("\n->Foi um prazer ajudar! Volte sempre!\n\n");
                break;

            default:
                break;
        }
    }

    return 0;
}


int menu()
{
    int opcao; 

    // Apresentação do sistema e instruções de uso
    printf("\n\n  - MERCADO SUPERBODEGA -  \n");

    printf("\n-> Seja bem-vindo(a) ao sistema de compras do mercado SuperBodega! Aqui voce possui tres principais funcionalidades: \n");
    printf("a lista de produtos cadastrados, a lista de desejos e o carrinho de compras. Veja as acoes que voce pode operar no sistema:\n");
    
    printf("\n- Lista de Produtos Cadastrados\n");
    printf("1 - Cadastrar um produto\n");
    printf("2 - Visualizar a lista de produtos cadastrados\n");
    printf("3 - Buscar um produto por codigo e exibir suas informacoes\n");
    printf("4 - Remover produto da lista de produtos cadastrados\n");

    printf("\n- Lista de Desejos\n");
    printf("5 - Adicionar um produto a sua lista de desejos\n");
    printf("6 - Visualizar sua lista de desejos\n");
    printf("7 - Buscar um produto por codigo na sua lista de desejos e exibir suas informacoes\n");
    printf("8 - Remover produto da lista de desejos\n");

    printf("\n- Carrinho de Compras\n");
    printf("9 - Adicionar um produto ao carrinho\n");
    printf("10 - Visualizar o carrinho\n");
    printf("11 - Buscar um produto por codigo no carrinho e exibir suas informacoes\n");
    printf("12 - Remover produto do carrinho\n");
    printf("13 - Fechar o pedido e finalizar sua compra\n");

    printf("\n14 - Finalizar sistema\n");

    // Recebimento de input do usuário para escolher a ação que deseja
    printf("\n-> Digite o numero da acao que deseja fazer: ");
    scanf("%i", &opcao);
    getchar();

    while (opcao > 14 || opcao < 1) // Tratamento de input inválido
    {
        printf("-> Essa e uma opcao invalida. Por favor, insira uma opcao valida: ");
        scanf("%i", &opcao);
        getchar();
    }

    return opcao;
}


Produto cadastrar_produto(int tam_lista)
{
    Produto novo_produto;

    // Validação do nome
    bool nome_valido = false;

    while (nome_valido == false)
    {
        printf("-> Insira o nome do produto que deseja cadastrar: "); // Inserir nome
        if (fgets(novo_produto.nome, 30, stdin))
        {
            novo_produto.nome[strcspn(novo_produto.nome, "\n")] = 0; // Remover caractere de nova linha
            nome_valido = true; 

            for (int i = 0; i < strlen(novo_produto.nome); i++) // Itera por todo o nome
            { 
                // Se um caractere não é espaço nem letra, o nome é inválido
                if (isalpha(novo_produto.nome[i]) == 0 && novo_produto.nome[i] != ' ') 
                {
                    printf("-> Esse nome e invalido. Digite um nome que contenha apenas letras.\n"); 
                    nome_valido = false; 
                    break;
                }           
            }
        }
        else
        {
            printf("-> Erro ao ler nome.\n");
            exit(1);
        }  
    }


    // Validação do preço
    char input_preco[20];
    char *ptr;
    bool preco_valido = false;

    while (preco_valido == false)
    {
        printf("-> Insira o preco do produto: "); // Inserir preço
        if(fgets(input_preco, 20, stdin))
        {
            input_preco[strcspn(input_preco, "\n")] = 0; // Remover caractere de nova linha
            preco_valido = true;

            novo_produto.preco = strtod(input_preco, &ptr); // Transformar input de string para double

            if (*ptr != '\0') // Verificar se preco e valido
            {
                printf("-> Esse preco e invalido. Insira um numero.\n");
                preco_valido = false;
            }
                
        }
        else
        {
            printf("Erro ao ler preco.\n");
            exit(1);
        }
    }

    novo_produto.codigo = tam_lista + 1; // Determinação do código
    itens_cadastrados++;

    return novo_produto;
}


void listar_produtos(Produto *lista, int inicio, int fim)
{
    for (int i = inicio; i < fim; i++)
    {
        printf("\nCodigo: %i\n", lista[i].codigo);
        printf("Nome: %s\n", lista[i].nome);
        printf("Preco: R$%.2f\n", lista[i].preco);
    }
}


void pegar_produto_por_codigo(Produto *lista, int tam_lista)
{
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja buscar nos produtos cadastrados? "); // Inserir código para busca
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse código na lista
    if (codigo < 1 || codigo > tam_lista)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na lista de itens cadastrados.\n");
    else 
    {
        // Se sim, chamar função listar_produtos para listar o produto desejado
        printf("-> O produto que voce busca foi encontrado:\n");
        listar_produtos(lista, codigo - 1, codigo); 
    }
}


void remover_produto(Produto *lista, int tam_lista)
{
    // Inserir código
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja remover da lista de itens cadastrados? "); 
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse código na lista
    if (codigo < 1 || codigo > tam_lista)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na lista de itens cadastrados.\n");
    else 
    {
        // Se sim, executar loop de remoção
        for (int i = codigo - 1; i < tam_lista; i++)
        {
            lista[i] = lista[i + 1];
            lista[i].codigo = i + 1;
        }

        itens_cadastrados--;

        printf("-> Produto removido com sucesso!\n");
    }
}


void add_lista_de_desejos(Produto *cadastrados, Produto *lista_desejos, int n_cadastrados, int n_lista_desejos)
{
    // Inserir código
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja adicionar na lista de desejos? "); 
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse código na lista
    if (codigo < 1 || codigo > n_cadastrados)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na lista de cadastrados.\n");
    else 
    {
        for (int i = 0; i < n_lista_desejos; i++) // Checar se o produto ja foi adicionado
        {
            if (codigo == lista_desejos[i].codigo)
            {
                printf("\n-> Esse produto ja foi adicionado a sua lista de desejos.\n");
                return;
            }
        }

        lista_desejos[n_lista_desejos] = cadastrados[codigo - 1];
        itens_ld++;
        printf("Produto adicionado com sucesso a lista de desejos!\n");
    }
}


void buscar_ld(Produto *lista, int tam_lista)
{
    bool achou_produto = false;
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja buscar na sua lista de desejos? "); // Inserir código para busca
    scanf("%i", &codigo);
    getchar();

    for (int i = 0; i < tam_lista; i++)
    {
        if (codigo == lista[i].codigo) // Ao achar, chamar função visualizar_carrinho com início no índice do item e fim no índice seguinte
        {
            printf("\n-> O produto que voce busca foi encontrado:\n");
            achou_produto = true;
            listar_produtos(lista, i, i + 1);

            break;
        }
    }

    // Se o produto não for encontrado, printar mensagem de erro
    if (achou_produto == false)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na sua lista de desejos.\n");
}


void remover_ld(Produto *lista, int tam_lista)
{
    bool achou_produto = false;
    int indice_produto;

    // Inserir código
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja remover da sua lista de desejos? "); 
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse produto na lista
    for (int i = 0; i < tam_lista; i++)
    {
        if (codigo == lista[i].codigo) // Ao encontrar, remover produto
        {
            achou_produto = true;
            indice_produto = i;

            for (int j = indice_produto; j < tam_lista; j++)
            {
                lista[j] = lista[j + 1];
            }

            itens_ld--;
            
            printf("-> Produto removido com sucesso!\n");
            break;
        }
    }

    // Se o produto não for encontrado, printar mensagem de erro
    if (achou_produto == false)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na sua lista de desejos.\n");
}


void comprar_produto(Produto *cadastrados, Carrinho *lista_carrinho, int n_cadastrados, int n_carrinho)
{
    Carrinho novo_item;
    bool produto_repetido = false;

    // Inserir código
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja adicionar ao carrinho? "); 
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse código na lista
    if (codigo < 1 || codigo > n_cadastrados)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo na lista de itens cadastrados.\n");
    else 
    {
        // Se sim, iterar por todos os produtos do carrinho para ver se o produto é repetido, aumentar a quandidade se for o caso
        for (int i = 0; i < n_carrinho; i++)
        {
            if (lista_carrinho[i].produto.codigo == codigo)
            {
                produto_repetido = true;
                lista_carrinho[i].quantidade++;
            }
        }

        if (produto_repetido == false) // Se o produto não for repetido, adicioná-lo pela primeira vez
        {
            lista_carrinho[n_carrinho].produto = cadastrados[codigo - 1];
            lista_carrinho[n_carrinho].quantidade = 1;
            itens_carrinho++;
        }
        
        printf("Produto adicionado ao carrinho com sucesso!\n");
    }
}


void visualizar_carrinho(Carrinho *lista, int inicio, int fim)
{
    for (int i = inicio; i < fim; i++)
    {
        printf("\nProduto: %s\n", lista[i].produto.nome);
        printf("Quantidade: %i\n", lista[i].quantidade);
        printf("Codigo: %i\n", lista[i].produto.codigo);
        printf("Preco: %.2f\n", lista[i].produto.preco);
    }
}


void remover_carrinho(Carrinho *lista, int tam_carrinho)
{
    bool achou_produto = false;
    bool produto_repetido = false;
    int indice_produto;

    // Inserir código
    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja remover do carrinho? "); 
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse produto na lista
    for (int i = 0; i < tam_carrinho; i++)
    {
        if (codigo == lista[i].produto.codigo)
        {
            indice_produto = i;
            achou_produto = true;

            // Ao encontrar o produto, checar se ele é repetido, diminuir a quantidade em 1 se for o caso
            if (lista[i].quantidade > 1)
            {
                produto_repetido = true;
                lista[i].quantidade--;
            }
            else // Se não for repetido, remover por completo
            {
                for (int j = indice_produto; j < tam_carrinho; j++)
                {
                    lista[j] = lista[j + 1];
                }

                itens_carrinho--;
            }
            
            printf("-> Produto removido com sucesso!\n");
            break;
        }
    }

    // Se o produto não for encontrado, printar mensagem de erro
    if (achou_produto == false)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo.\n");
}


void tem_no_carrinho(Carrinho *lista, int tam_carrinho)
{
    bool achou_produto = false; 

    int codigo;
    printf("\n-> Qual e o codigo do produto que deseja buscar no seu carrinho? "); // Inserir código para busca
    scanf("%i", &codigo);
    getchar();

    // Verificar se há esse produto na lista
    for (int i = 0; i < tam_carrinho; i++)
    {
        if (codigo == lista[i].produto.codigo) // Ao achar, chamar função visualizar_carrinho com início no índice do item e fim no índice seguinte
        {
            printf("\n-> O produto que voce busca foi encontrado:\n");
            achou_produto = true;
            visualizar_carrinho(lista, i, i + 1);

            break;
        }
    }

    // Se o produto não for encontrado, printar mensagem de erro
    if (achou_produto == false)
        printf("-> Desculpe, nao foi encontrado nenhum produto com esse codigo no seu carrinho.\n");
}


void fechar_pedido(Carrinho *lista, int tam_carrinho)
{
    float valor_total;
    char opt;
    
    printf("\n-> Esses sao os produtos incluidos no seu pedido:\n"); // Printar itens do carrinho
    visualizar_carrinho(lista, 0, tam_carrinho);

    for (int i = 0; i < tam_carrinho; i++) // Calcular valor total
        valor_total += lista[i].produto.preco;

    printf("\n-> Preco total: %.2f\n", valor_total); // Printar valor total

    printf("\n-> Fechar pedido? (\"s\" para sim e \"n\" para nao): "); // Confirmar fechamento do pedido
    scanf("%c", &opt);
    tolower(opt);

    // Checar resposta
    if (opt == 's')
    {
        itens_carrinho = 0;
        printf("\n-> Obrigada pela preferencia! Volte Sempre!\n");
    }
    else if (opt == 'n')
    {
        printf("\n-> Tudo bem!\n");
    }
    else    
        printf("\n-> Opcao invalida.\n");
}
