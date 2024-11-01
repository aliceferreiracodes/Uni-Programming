package contaBancaria;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Contas {
	
	private static Scanner sc = new Scanner(System.in);
	
	public static int inputContaDesejada() {
		
		int input;
		
		sc.nextLine();
		System.out.println("\n- Informe o número da conta: ");
		input = sc.nextInt();
		
		
		return input;
	}
	
	public static boolean contaExiste(int numConta, int numeroDeContas) {
		
		if (numConta < 0 || numConta > numeroDeContas - 1) {
			System.out.println("\n- Não há nenhuma conta com esse número.");
			return false;
		} 
		else {
			return true;
		}
		
	}

	public static void main(String[] args) {
		
		// criação da lista de contas tradicionais
		
		int numeroDeContas = 0;
		List<ContaBancaria> contas = new ArrayList<>();
		
		
		// prompt para input da ação escolhida pelo usuário
		
		int opcao;
		String nome;
		int numConta;
	
		
		do {
			System.out.println("\nSistema Bancário");
			System.out.println("\n- Operações: ");
			System.out.println("1 - Criar nova conta tradicional");
			System.out.println("2 - Criar nova conta poupança");
			System.out.println("3 - Criar nova conta especial");
			System.out.println("4 - Sacar");
			System.out.println("5 - Depositar");
			System.out.println("6 - Exibir saldo");
			System.out.println("7 - Exibir dados das contas");
			System.out.println("8 - Encerrar");
			
			opcao = sc.nextInt();
			
			
			switch (opcao) {
				case 1: // criação de uma conta tradicional
					
					// input do usuário
					
					sc.nextLine();
					System.out.println("\n- Criar nova conta tradicional");
					System.out.println("Nome do cliente: ");
					nome = sc.nextLine();
					
					// cria conta com o nome fornecido, um número baseado no número de contas existentes e saldo igual a 0
					
					ContaBancaria novaContaTradicional = new ContaBancaria(nome, numeroDeContas, 0); 
					contas.add(novaContaTradicional);
					numeroDeContas++;
					
					break;
					
					
				case 2: // criação de uma nova conta poupança
					
					// input do usuário
					
					sc.nextLine();
					System.out.println("\n- Criar nova conta poupança");
					System.out.println("Nome do cliente: ");
					nome = sc.nextLine();
					
					// cria conta com o nome fornecido, um número baseado no número de contas existentes, saldo igual a 0 e dia de rendimento 1
					
					ContaPoupanca novaContaPoupanca = new ContaPoupanca(nome, numeroDeContas, 0, 1); 
					contas.add(novaContaPoupanca);
					numeroDeContas++;
					
					break;
					
					
				case 3: // criação de uma nova conta especial
					
					// input do usuário
					
					double limite;
					
					sc.nextLine();
					System.out.println("\n- Criar nova conta especial");
					System.out.println("Nome do cliente: ");
					nome = sc.nextLine();
					System.out.println("Limite: ");
					limite = sc.nextDouble();
					
					// cria conta com o nome fornecido, um número baseado no número de contas existentes, saldo igual a 0 e limite fornecido
					
					ContaEspecial novaContaEspecial = new ContaEspecial(nome, numeroDeContas, 0, limite); 
					contas.add(novaContaEspecial);
					numeroDeContas++;
					
					break;
					
				
				case 4: // sacar
					
					// input da conta desejada
					
					numConta = inputContaDesejada();
					
					if (contaExiste(numConta, numeroDeContas) == false) {
						break;
					}
					
					// input do valor do saque
					
					double valorSaque;
					
					sc.nextLine();
					System.out.println("\n- O saldo dessa conta é " + contas.get(numConta).saldo + "R$. Informe quanto deseja sacar: ");
					valorSaque = sc.nextDouble();
					
					// verificar se o saque é possível
					
					Class<?> classe = contas.get(numConta).getClass(); // obter a classe da conta que o usuário quer 
					
					if (classe.getName() != "contaBancaria.ContaEspecial" && valorSaque > contas.get(numConta).saldo) { // não permite o saque caso a conta não seja especial e tenha saldo insuficiente
						System.out.println("\n- Não é possível sacar esse valor pois ele excede o saldo atual da sua conta.");
						break;
					}
					
					// realizar o saque
					
					contas.get(numConta).sacar(valorSaque);
					System.out.println("\n- Você sacou " + valorSaque + "R$.");
					
					break;
					
					
				case 5: // depositar
					
					// input da conta desejada
					
					numConta = inputContaDesejada();
					
					if (contaExiste(numConta, numeroDeContas) == false) {
						break;
					}
					
					// input do valor do depósito

					double valorDeposito;
					
					sc.nextLine();
					System.out.println("\n- Informe o valor do depósito: ");
					valorDeposito = sc.nextDouble();
					
					// realizar depósito
					
					contas.get(numConta).depositar(valorDeposito);
					System.out.println("\n- Você depositou " + valorDeposito + "R$.");
					
					break;
					
					
				case 6: // exibir saldo da conta
					
					// input da conta desejada
					
					numConta = inputContaDesejada();
					
					if (contaExiste(numConta, numeroDeContas) == false) {
						break;
					}
					
					// exibir saldo da conta
					
					ContaBancaria contaSaldo = contas.get(numConta);
					
					Class<?> classeSaldo = contaSaldo.getClass();
					
					System.out.println("O saldo dessa conta é: " + contaSaldo.saldo + "R$.");
					
					if (classeSaldo.getName() == "contaBancaria.ContaPoupanca") {
						ContaPoupanca contaTemp = (ContaPoupanca) contaSaldo;
						System.out.println("O saldo com rendimento é: " + contaTemp.calcularNovoSaldo());
					}
					
					break;
					
					
				case 7: // exibir dados das contas
					
					for (ContaBancaria conta : contas) {
						
						System.out.println("\nNome do cliente: " + conta.nomeCliente);
						System.out.println("Número da conta: " + conta.numeroConta);
						System.out.println("Saldo: " + conta.saldo + "R$");
						
						Class<?> classeAtual = conta.getClass();
						
						if (classeAtual.getName() == "contaBancaria.ContaEspecial") {
							ContaEspecial contaTemp = (ContaEspecial) conta;
							System.out.println("Limite: " + contaTemp.limite);
						}
						else if (classeAtual.getName() == "contaBancaria.ContaPoupanca") {
							ContaPoupanca contaTemp = (ContaPoupanca) conta;
							System.out.println("Dia de rendimento: " + contaTemp.diaRendimento);
							System.out.println("Saldo com rendimento: " + contaTemp.calcularNovoSaldo());
						}
						
					}
					
					break;
					
					
				case 8: // encerrar
					
					System.out.println("\n- Sessão encerrada.");
					
					break;
					
					
				default: // caso de opção inválida
					
					System.out.println("\n- Essa opção é inválida.");
					
					break;
			}
			
			
		} while (opcao != 8);
		
		
		sc.close();
	}
	
	

}
