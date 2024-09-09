package imc;

public class CalcIMC {

	// atributos
	
	double altura;
	double peso;
	
	// métodos
	
	// calcular IMC
	public double calcularIMC() {
		return peso / (altura * altura);
	}
	
	// interpretar
	public String interpretarIMC(double imc) {
		if (imc < 18.5) 
			return "Abaixo do peso";
		
		else if (imc > 18.5) 
			return "Peso normal";
	
		else if (imc > 24.5) 
			return "Peso normal";
		
		else 
			return "Sobrepeso";
		
	}
	
}
