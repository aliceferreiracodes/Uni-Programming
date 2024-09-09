package ex2;

public class Aumento {

	double salarioAntigo, salarioNovo;
	
	public double Aplicacao() {
		
		if (salarioAntigo < 1001)
			salarioNovo = salarioAntigo + (salarioAntigo * 0.15);
		else if (salarioAntigo < 1501)
			salarioNovo = salarioAntigo + (salarioAntigo * 0.1);
		else if (salarioAntigo < 2001)
			salarioNovo = salarioAntigo + (salarioAntigo * 0.05);
		else
			salarioNovo = salarioAntigo;
		
		return salarioNovo;
	}
}
