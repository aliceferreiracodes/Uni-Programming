package ex1;

import java.util.Scanner;


public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		Produto produto1 = new Produto();
		
	// Ler os dados do produto: nome, preço, quantidade no estoque
		System.out.println("-> Preencha os seguintes dados do produto:");
		
		System.out.println("Nome: ");
		produto1.nome = sc.nextLine();
		
		System.out.println("Preco: ");
		produto1.preco = sc.nextDouble();
		
		System.out.println("Quantidade no estoque: ");
		produto1.estoque = sc.nextInt();
		
	// Exibir dados: nome, preço, quantidade no estoque, valor total no estoque
		System.out.println("\n-> Dados do produto: ");
		System.out.println("Nome: " + produto1.nome);
		System.out.println("Preco: " + produto1.preco);
		System.out.println("Quantidade no estoque: " + produto1.estoque);
		System.out.println("Valor total do estoque: " + (produto1.preco * produto1.estoque));
		
	// Realizar entrada
		// Pedir quantidade de entrada
		System.out.println("\n-> Realizar entrada de produto: ");
		System.out.println("Informe a quantidade de entrada: "); 
		produto1.estoque += sc.nextInt();
		
		// Exibir dados novamente
		System.out.println("\n-> Dados do produto: ");
		System.out.println("Nome: " + produto1.nome);
		System.out.println("Preco: " + produto1.preco);
		System.out.println("Quantidade no estoque: " + produto1.estoque);
		System.out.println("Valor total do estoque: " + (produto1.preco * produto1.estoque));
		
	// Realizar saída:
		// Pedir quandidade de saída
		System.out.println("\n-> Realizar saida de produto: ");
		
		// Validação
		int saida;
		
		do {
			System.out.println("Informe a quantidade de saida: ");
			saida = sc.nextInt();
			
			if (produto1.Validacao(saida) == false)
			System.out.println("Quantidade indisponivel. Há " + produto1.estoque + " produto(s) no estoque.");
			
		} while (produto1.Validacao(saida) == false);
		
		produto1.estoque -= saida;
		
		// Exibir dados novamente
		System.out.println("\n-> Dados do produto: ");
		System.out.println("Nome: " + produto1.nome);
		System.out.println("Preco: " + produto1.preco);
		System.out.println("Quantidade no estoque: " + produto1.estoque);
		System.out.println("Valor total do estoque: " + (produto1.preco * produto1.estoque));
		
		sc.close();

	}

}
