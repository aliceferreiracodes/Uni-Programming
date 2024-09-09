package imc;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {

		// scanner
		Scanner sc = new Scanner(System.in);
		
		// objeto 
		CalcIMC calcIMC = new CalcIMC();
		
		//passar os dados de leitura
		System.out.println("Peso: ");
		calcIMC.peso = sc.nextDouble();
		
		System.out.println("Altura");
		calcIMC.altura = sc.nextDouble();
		
		// calcular o imc
		double imc = calcIMC.calcularIMC();
		
		// resultado
		System.out.println(calcIMC.interpretarIMC(imc));
		
		sc.close();

	}

}
