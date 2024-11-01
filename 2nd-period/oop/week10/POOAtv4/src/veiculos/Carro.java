package veiculos;

public class Carro extends Veiculo {

	public Carro(String placa, String marca, String modelo, int anoFab, double preco) {
		super(placa, marca, modelo, anoFab, preco);
	}

	@Override
	public void calcularIPVA() {
		double valorEstimado = preco - 2000 * (2024 - anoFab);
		IPVA = valorEstimado * 0.04;
	}

	@Override
	public void exibirDetalhes() {
		System.out.println("\nTipo de veículo: carro");
		System.out.println("Placa: " + placa);
		System.out.println("Marca: " + marca);
		System.out.println("Modelo: " + modelo);
		System.out.println("Ano de fabricação: " + anoFab);
		System.out.println("IPVA: " + IPVA);
	}

}
