package contaBancaria;

public class ContaPoupanca extends ContaBancaria {
	
	// atributos
	
	int diaRendimento;
	
	
	// construtores
	
	public ContaPoupanca(String nomeCliente, int numeroConta, double saldo, int diaRendimento) {
		super(nomeCliente, numeroConta, saldo);
		this.diaRendimento = diaRendimento;
	}

	
	// métodos
	
	public double calcularNovoSaldo() {
		return saldo + (diaRendimento * Math.pow(1 + 0.1075, 1.0 / 252) - 1);
	}

}
