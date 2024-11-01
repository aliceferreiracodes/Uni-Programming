package hotel;

public class QuartoDuplo implements Acomodacao, ServicoAdicional {
	
	int dias;
	
	public QuartoDuplo(int dias) {
		this.dias = dias;
	}
	
	@Override
	public double calcularServico(boolean servico, int dias, int pessoas) {
		// true = café da manhã (20R$)
		// false = limpeza extra (30R$)
		if (servico == true) {
			return 20.0 * dias * pessoas;
		}
		else {
			return 30.0 * dias * pessoas;
		}
	}

	@Override
	public double calcularDiaria() {
		return dias * 180;
	}

	@Override
	public void exibirDetalhes(double valorServico) {
		System.out.println("\nTipo de acomodação: Quarto duplo");
		System.out.println("Custo total das diárias agendadas: " + calcularDiaria());
		System.out.println("Custo dos serviços adicionais: " + valorServico);
		System.out.println("Custo total da acomodação (diárias + serviço): " + (calcularDiaria() + valorServico));
	}

}
