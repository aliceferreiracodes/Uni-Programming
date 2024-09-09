package ex3;

public class Triangulo {
	double l1, l2, l3;
	
	public double CalcArea() {
		double p = (l1 + l2 + l3) / 2;
		return Math.sqrt(p * (p - l1) * (p - l2) * (p - l3));
	}
}
