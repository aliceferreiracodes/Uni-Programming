package ex2;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		/*Faça um programa que leia os dados de um funcionário (nome e salário). Em seguida,
		aplique um aumento com base no salário do funcionário a saber:
		• Se o salário do funcionário estiver entre 1 e 1000, aplique um aumento de 15%;
		• Se o salário do funcionário estiver entre 1001 e 1500, aplique um aumento de
		10%;
		• Se o salário do funcionário estiver entre 1501 e 2000, aplique um aumento de 5%.
		Ao final imprima o salário antigo e o atual do funcionário, de acordo com o aumento
		estabelecido.*/
		
		// ler dados (nome e salário)
		// aumento de 15% - entre 1 e 1000
		// aumento de 10% - entre 1001 e 1500
		// aumento de 5% - entre 1501 e 2000
		// imprimir salário antigo e atual
		
		Aumento aumento = new Aumento();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite seu salario: ");
		aumento.salarioAntigo = sc.nextDouble();
		
		aumento.Aplicacao();
		
		System.out.println("Salario antigo: " + (aumento.salarioAntigo));
		System.out.println("Salario com aumento: " + aumento.salarioNovo);
		
		sc.close();

	}

}
