package desafio4;

import java.util.ArrayList;
import java.util.List;

public class Pedido {
	
	int numero;
	double valorTotal;
	public int num_produtos = 0;
	List<Produto> listaPedidos = new ArrayList<>();
	
	public double aplicarDesconto() {
		if (valorTotal > 1000)
			valorTotal -= valorTotal * 0.2;
		else if (valorTotal > 500)
			valorTotal -= valorTotal * 0.15;
		else if (valorTotal > 200)
			valorTotal -= valorTotal * 0.1;
		else if (valorTotal > 100)
			valorTotal -= valorTotal * 0.05;
		
		return valorTotal;
	}
		
	
	public Pedido(int numero) {
		this.numero = numero;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public double getValorTotal() {
		return valorTotal;
	}

	public void setValorTotal(double valorTotal) {
		this.valorTotal = valorTotal;
	}
	
	
	public void adicionarProduto(Produto novoProduto) {
		listaPedidos.add(novoProduto);
		valorTotal += novoProduto.preco;
		num_produtos++;
	}
	
	public void removerProduto(int codigo) {
		int i = codigo - 1;
		valorTotal -= listaPedidos.get(i).preco;
		listaPedidos.remove(i);
		num_produtos--;
		
		for (i = 0; i < num_produtos; i++) {
			listaPedidos.get(i).codigo = i + 1;
		}
			
	}
	
	public void listarProdutos()
	{
		System.out.printf("Pedido: %d, valor total: %.2f\n", numero, valorTotal);
		for (int i = 0; i < listaPedidos.size(); i++) {
			System.out.println("Nome: " + listaPedidos.get(i).nome);
			System.out.println("Preco: " + listaPedidos.get(i).preco);
			System.out.println("Codigo: " + listaPedidos.get(i).codigo + "\n");
		}
	}
	
	
}
