package contaBancaria;

public class ContaBancaria {
	
	// atributos
	
	String nomeCliente;
	int numeroConta;
	double saldo;
	
	
	// construtores
	
	public ContaBancaria(String nomeCliente, int numeroConta, double saldo) {
		this.nomeCliente = nomeCliente;
		this.numeroConta = numeroConta;
		this.saldo = saldo;
	}
	
	
	// métodos

	public void sacar(double valorSaque) {
		saldo -= valorSaque;
	}
	
	public void depositar(double valorDeposito) {
		saldo += valorDeposito;
	}
	
}
