package veiculos;

public class Onibus extends Veiculo {

	public Onibus(String placa, String marca, String modelo, int anoFab, double preco) {
		super(placa, marca, modelo, anoFab, preco);
	}

	@Override
	public void calcularIPVA() {
		double valorEstimado = preco - 3000 * (2024 - anoFab);
		IPVA = valorEstimado * 0.02;
	}

	@Override
	public void exibirDetalhes() {
		System.out.println("\nTipo de veículo: ônibus");
		System.out.println("Placa: " + placa);
		System.out.println("Marca: " + marca);
		System.out.println("Modelo: " + modelo);
		System.out.println("Ano de fabricação: " + anoFab);
		System.out.println("IPVA: " + IPVA);
	}

}
