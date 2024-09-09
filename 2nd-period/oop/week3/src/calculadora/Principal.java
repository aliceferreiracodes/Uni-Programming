package calculadora;

import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		Calculadora calc = new Calculadora();
		
		System.out.println("Num 1: ");
		calc.num1 = sc.nextDouble(); 
				
		System.out.println("Num 2: ");
		calc.num2 = sc.nextDouble();
		
		System.out.println("Escolha a operacao digitando o numero correspondente:\n1 - soma\n2 - subtracao\n3 - divisao\n4 - multiplicacao");
		calc.operacao = sc.nextInt();
		
		switch (calc.operacao) {
			case 1:
				System.out.println(calc.somar());
				break;
			case 2:
				System.out.println(calc.subtrair());
				break;
			case 3:
				System.out.println(calc.dividir());
				break;
			case 4:
				System.out.println(calc.multiplicar());
				break;
			default:
				System.out.println("Resposta invalida.");
		}
		
		sc.close();
		
	}

}
