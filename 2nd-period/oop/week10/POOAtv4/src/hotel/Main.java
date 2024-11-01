package hotel;

public class Main {

	public static void main(String[] args) {

		QuartoSimples qsimples = new QuartoSimples(7);
		QuartoDuplo qduplo = new QuartoDuplo(5);
		Suite suite = new Suite(15);
		
		double servicoq1 = qsimples.calcularServico(true, 2, 2);
		double servicoq2 = qduplo.calcularServico(false, 4, 1);
		double servicoq3 = suite.calcularServico(true, 14, 2);
		
		qsimples.exibirDetalhes(servicoq1);
		qduplo.exibirDetalhes(servicoq2);
		suite.exibirDetalhes(servicoq3);

	}

}
