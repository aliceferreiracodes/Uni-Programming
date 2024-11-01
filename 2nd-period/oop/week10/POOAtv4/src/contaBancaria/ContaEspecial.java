package contaBancaria;

public class ContaEspecial extends ContaBancaria {
	
	// atributos 
	
	double limite;

	
	// construtores
	
	public ContaEspecial(String nomeCliente, int numeroConta, double saldo, double limite) {
		super(nomeCliente, numeroConta, saldo);
		this.limite = limite;
	}
	
	
	// métodos
	
	@Override
	public void sacar(double valorSaque) {
		saldo -= valorSaque;
	}
}
