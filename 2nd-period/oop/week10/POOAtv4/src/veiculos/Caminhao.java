package veiculos;

public class Caminhao extends Veiculo {

	public Caminhao(String placa, String marca, String modelo, int anoFab, double preco) {
		super(placa, marca, modelo, anoFab, preco);
	}

	@Override
	public void calcularIPVA() {
		double valorEstimado = preco - 5000 * (2024 - anoFab);
		IPVA = valorEstimado * 0.015;
	}

	@Override
	public void exibirDetalhes() {
		System.out.println("\nTipo de veículo: caminhão");
		System.out.println("Placa: " + placa);
		System.out.println("Marca: " + marca);
		System.out.println("Modelo: " + modelo);
		System.out.println("Ano de fabricação: " + anoFab);
		System.out.println("IPVA: " + IPVA);
	}

}
