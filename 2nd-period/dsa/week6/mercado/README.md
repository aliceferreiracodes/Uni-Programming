# mercado.c

mercado.c é um programa escrito em C que simula um sistema de mercado simples.


## 🛠️ Funcionalidades

As principais funcionalidades do sistema de mercado são:

- Lista de itens cadastrados
- Lista de desejos
- Carrinho de compras

Em todas elas é possível realizar operações de adição, busca e remoção de produtos, além de exibir a lista inteira.


## 👩‍💻 Desenvolvimento

O sistema de mercado foi desenvolvido com as funcionalidades mencionadas acima, e para tal, foram criadas as seguintes funções:

`cadastrar_produto()` -  Cadastra produto na lista de itens do mercado

`listar_produtos()` - Exibe informações de produtos em determinado intervalo da lista

`pegar_produto_por_codigo()` - Busca por produto na lista de cadastrados

`remover_produto()` - Remove produto informado por código

`add_lista_de_desejos()` - Adiciona item à lista de desejos
 
`buscar_ld()` - Busca por produto na lista de desejos

`remover_ld()` - Remove produto da lista de desejos

`comprar_produto()` - Adiciona produto ao carrinho

`visualizar_carrinho()` - Exibe itens do carrinho

`remover_carrinho()` - Remove um item do carrinho

`tem_no_carrinho()` - Busca item no carrinho

`fechar_pedido()` - Exibe valor total da compra e finaliza pedido, limpando o carrinho

## ⌨️ Como utilizar

Aqui vão algumas instruções de como utilizar o sistema:

### Compilação e execução

Para compilar e executar o arquivo `mercado.c`, é necessário ter o GCC instalado e configurado como variável de ambiente em seu computador.

Com isso feito, basta ter um terminal aberto na pasta onde o arquivo `mercado.c` se encontra e inserir os seguintes comandos no terminal:

```
$ gcc mercado.c -o mercado
$ ./mercado
```
Esses comandos irão compilar e executar o programa, respectivamente.

### Utilização

Ao executar o programa, o seguinte texto irá aparecer no seu terminal: 

```
  - MERCADO HYRULE -  

-> Seja bem-vindo(a) ao sistema de compras do mercado Hyrule! Aqui voce possui tres principais funcionalidades: 
a lista de produtos cadastrados, a lista de desejos e o carrinho de compras. Veja as acoes que voce pode operar no sistema:

- Lista de Produtos Cadastrados
1 - Cadastrar um produto
2 - Visualizar a lista de produtos cadastrados
3 - Buscar um produto por codigo e exibir suas informacoes
4 - Remover produto da lista de produtos cadastrados

- Lista de Desejos
5 - Adicionar um produto a sua lista de desejos
6 - Visualizar sua lista de desejos
7 - Buscar um produto por codigo na sua lista de desejos e exibir suas informacoes
8 - Remover produto da lista de desejos

- Carrinho de Compras
9 - Adicionar um produto ao carrinho
10 - Visualizar o carrinho
11 - Buscar um produto por codigo no carrinho e exibir suas informacoes
12 - Remover produto do carrinho
13 - Fechar o pedido e finalizar sua compra

14 - Finalizar sistema

-> Digite o numero da acao que deseja fazer:
```

Para utilizar o programa, basta digitar o número que corresponde à ação que deseja efetuar no sistema de mercado e pressionar Enter.
Após ter inserido sua opção, aparecerão instruções relativas à ação que escolheu. 

Essa mesma prompt aparecerá na tela toda vez que você finalizar uma ação, a não ser que digite a opção 14, que irá encerrar o programa.