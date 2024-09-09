package ex1;

public class Produto {

	String nome;
	double preco;
	int estoque;
	
	
	public boolean Validacao(int qtdSaida) {
		if (qtdSaida > estoque)
			return false;
		else
			return true;
	}
}
