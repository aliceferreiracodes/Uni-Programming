package ex4;

public class Aluno {
	String nome;
	double n1, n2, n3;
	
	public String Aprovacao() {
		double total = n1 + n2 + n3;
		
		if (total < 70) {
			double falta = 70 - total;
			return "Sua nota e insuficiente para aprovacao. Para conseguir uma nota suficiente, voce precisa de mais " + falta + " pontos.";
		}
		else
			return "Voce recebeu aprovacao.";
	}
}
