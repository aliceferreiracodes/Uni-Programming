package desafio4;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
        
		Pedido pedido1 = new Pedido(1);
		
        int opcao;
        
        do {
        	System.out.println("Escolha uma acao:");
        	System.out.println("1 - Adicionar produto");
        	System.out.println("2 - listar produtos do pedido");
        	System.out.println("3 - remover produto do pedido");
        	System.out.println("4 - finalizar compra");
        	System.out.println("5 - sair");
        	opcao = sc.nextInt();
        	
        	switch (opcao) {
        		case 1: 
        			sc.nextLine();
                    System.out.println("\nAdicionar produto");
                    
                    System.out.print("Nome: ");
                    String nome = sc.nextLine();

                    System.out.print("Preco: ");
                    double preco = sc.nextDouble();

                    Produto produto = new Produto(nome, preco, pedido1.num_produtos);
        			pedido1.adicionarProduto(produto);
        			break;
        			
        		case 2:
        			pedido1.listarProdutos();
        			break;
        			
        		case 3: 
        			System.out.println("Qual o codigo do produto que deseja remover? ");
        			int codigo_input = sc.nextInt();
        			
        			if (codigo_input < 1 || codigo_input > pedido1.num_produtos) {
        				System.out.println("Nao ha produtos com esse codigo.\n");
        				break;
        			}
        				
        			pedido1.removerProduto(codigo_input);
        			break;
        			
        		case 4:
        			pedido1.aplicarDesconto();
        			pedido1.listarProdutos();
        			
        		case 5: 
        			System.out.println("Tchau!");
        			break;
        			
        		default:
        			System.out.println("Opcao invalida");
        			break;
        	}
        	
        } while (opcao != 5);
        
        
		sc.close();

	}

}
