package hotel;

public class Suite implements Acomodacao, ServicoAdicional {
	
	int dias;
	
	public Suite(int dias) {
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
		return dias * 350;
	}

	@Override
	public void exibirDetalhes(double valorServico) {
		System.out.println("\nTipo de acomodação: Suíte");
		System.out.println("Custo total das diárias agendadas: " + calcularDiaria());
		System.out.println("Custo dos serviços adicionais: " + valorServico);
		System.out.println("Custo total da acomodação (diárias + serviço): " + (calcularDiaria() + valorServico));
	}

}
