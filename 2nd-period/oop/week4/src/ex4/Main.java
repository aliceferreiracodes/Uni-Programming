package ex4;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		/*Faça um programa para ler o nome de um aluno e as três notas que ele obteve nos
		três trimestres do ano:
		• Primeiro trimestre vale 30 pontos;
		• Segundo e terceiro trimestre valem 35 pontos cada.
		Apresente a nota final, considerando o somatório dos três trimestres. O programa deve
		realizar as seguintes validações:
		• Se o usuário digitar uma nota fora do intervalo de cada trimestre, o programa
		deverá solicitar a digitação novamente, até que o usuário informe a nota dentro
		do intervalo correto. Utilize a estrutura de repetição (while).
		• Após o somatório das notas, informe se o aluno está aprovado (maior ou igual a
		70) ou reprovado (menor que 70). Em caso de reprovação, informe quantos
		pontos faltam para ele obter o mínimo para ser aprovado.*/
		
		Aluno aluno = new Aluno();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Digite seu nome: ");
		aluno.nome = sc.nextLine();
		
		do {
			System.out.println("\nDigite suas notas dos trimestres a seguir");
			System.out.println("Trimestre 1 (ate 30 pontos): ");
			aluno.n1 = sc.nextDouble();
			System.out.println("Trimestre 2 (ate 35 pontos): ");
			aluno.n2 = sc.nextDouble();
			System.out.println("Trimestre 3 (ate 35 pontos): ");
			aluno.n3 = sc.nextDouble();
			
			if (aluno.n1 > 30 || aluno.n2 > 35 || aluno.n3 > 35)
				System.out.println("A(s) nota(s) que voce digitou estao fora do intervalo de pontuacao do trimestre.");
			
		} while (aluno.n1 > 30 || aluno.n2 > 35 || aluno.n3 > 35);
		
		System.out.println(aluno.Aprovacao());
		
		sc.close();

	}

}
