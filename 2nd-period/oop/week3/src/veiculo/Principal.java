package veículo;

public class Principal {

	public static void main(String[] args) {

		Carro meuCarro = new Carro();
		Carro meuCarro2 = new Carro();
		
		meuCarro.modelo = "SUV";
		meuCarro.cor = "Azul";
		meuCarro.ano = 2021;
		meuCarro.placa = "REU1D1215";
		
		meuCarro2.modelo = "Sedan";
		meuCarro2.cor = "Vermelho";
		meuCarro2.ano = 2020;
		meuCarro2.placa = "FJA1F5216";
		
		meuCarro.exibirInformacoes();
		meuCarro2.exibirInformacoes();

	}

}
