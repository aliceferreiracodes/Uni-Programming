package ex3;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		/*– Crie um programa para ler as medidas dos lados de dois triângulos X e Y. Em seguida,
		apresente o valor das áreas dos dois triângulos e informe qual dos triângulos possui a
		maior área.
		A fórmula para calcular a área do triângulo a partir das medidas de seus lados "a", "b" e
		"c" é a seguinte (fórmula de Heron):*/
		
		// ler lados de dois triângulos - x e y
		// apresentar valor das áreas
		// dizer qual possui a maior área
		
		Triangulo t1 = new Triangulo();
		Triangulo t2 = new Triangulo();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite a medida dos lados dos triangulos.\n");
		
		System.out.println("Triangulo X");
		System.out.println("Lado 1: ");
		t1.l1 = sc.nextDouble();
		System.out.println("Lado 2: ");
		t1.l2 = sc.nextDouble();
		System.out.println("Lado 3: ");
		t1.l3 = sc.nextDouble();
		
		System.out.println("Triangulo Y");
		System.out.println("Lado 1: ");
		t2.l1 = sc.nextDouble();
		System.out.println("Lado 2: ");
		t2.l2 = sc.nextDouble();
		System.out.println("Lado 3: ");
		t2.l3 = sc.nextDouble();
		
		System.out.printf("Area do triangulo X: %.2f\n", t1.CalcArea());
		System.out.printf("Area do triangulo Y: %.2f\n", t2.CalcArea());
		
		if (t1.CalcArea() > t2.CalcArea())
			System.out.println("O triangulo que tem maior area e o triangulo X.");
		else if (t2.CalcArea() > t1.CalcArea())
			System.out.println("O triangulo que tem maior area e o triangulo Y.");
		else
			System.out.println("As areas dos triangulos sao iguais.");
		
		sc.close();

	}

}
