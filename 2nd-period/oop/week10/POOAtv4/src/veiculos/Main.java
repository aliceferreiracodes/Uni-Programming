package veiculos;

public class Main {

	public static void main(String[] args) {

		Veiculo carro1 = new Carro("REU04J67", "Volkswagen", "Polo", 2023, 90000);
		Veiculo caminhao1 = new Caminhao("JEF76A32", "Volvo", "FH 540", 2020, 580000);
		Veiculo onibus1 = new Onibus("RGY86H87", "Mercedes-Benz", "1722", 2015, 200000);
		
		carro1.calcularIPVA();
		caminhao1.calcularIPVA();
		onibus1.calcularIPVA();
		
		System.out.println("Antes da alteração:");
		carro1.exibirDetalhes();
		caminhao1.exibirDetalhes();
		onibus1.exibirDetalhes();
		
		System.out.println("_______________________");
		
		System.out.println("\nDepois da alteração:");
		carro1.setPreco(100000);
		caminhao1.setAnoFab(2022);
		onibus1.setPlaca("RTF87D68");
		
		carro1.calcularIPVA();
		caminhao1.calcularIPVA();
		onibus1.calcularIPVA();
		
		carro1.exibirDetalhes();
		caminhao1.exibirDetalhes();
		onibus1.exibirDetalhes();

	}

}
