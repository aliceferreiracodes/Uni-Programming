package veiculos;

public abstract class Veiculo {
	
	// atributos
	
	String placa;
	String marca;
	String modelo;
	int anoFab;
	double preco;
	double IPVA;
	
	
	// construtores
	
	public Veiculo(String placa, String marca, String modelo, int anoFab, double preco) {
		super();
		this.placa = placa;
		this.marca = marca;
		this.modelo = modelo;
		this.anoFab = anoFab;
		this.preco = preco;
	}
	
	
	// métodos
	
	public abstract void calcularIPVA();
	
	public abstract void exibirDetalhes();
	
	
	// getters e setters

	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public String getModelo() {
		return modelo;
	}

	public void setModelo(String modelo) {
		this.modelo = modelo;
	}

	public int getAnoFab() {
		return anoFab;
	}

	public void setAnoFab(int anoFab) {
		this.anoFab = anoFab;
	}
	
	public double getPreco() {
		return preco;
	}


	public void setPreco(double preco) {
		this.preco = preco;
	}


	public double getIPVA() {
		return IPVA;
	}


	public void setIPVA(double iPVA) {
		IPVA = iPVA;
	}
	
}
