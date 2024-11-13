const form = document.getElementById('valorForm');
const tabelaValores = document.getElementById('tabelaValores').getElementsByTagName('tbody')[0];

form.addEventListener('submit', function(event) {
    event.preventDefault(); // Evita o envio do formulário

    // Obtém os valores dos campos de entrada
    const nome = document.getElementById('nome').value;
    const preco = parseFloat(document.getElementById('preco').value);
    const desconto = calcularDesconto(preco);
    const precoComDesconto = calcularNovoPreco(preco, desconto);

    // Cria uma nova linha
    const novaLinha = tabelaValores.insertRow();

    // Insere as células com os valores
    const celula1 = novaLinha.insertCell(0);
    celula1.textContent = nome;

    const celula2 = novaLinha.insertCell(1);
    celula2.textContent = preco.toFixed(2); // Formata o preço

    const celula3 = novaLinha.insertCell(2);
    celula3.textContent = (desconto * 100).toFixed(2) + '%'; // Valor do desconto

    const celula4 = novaLinha.insertCell(3);
    celula4.textContent = precoComDesconto.toFixed(2); // Preço com desconto

    // Limpa os campos de entrada
    document.getElementById('nome').value = '';
    document.getElementById('preco').value = '';
});

function calcularDesconto(preco) {
    if (preco > 300) {
        return 0.05; // 5% de desconto
    } else {
        return 0.1; // 10% de desconto
    }
}

function calcularNovoPreco(preco, desconto) {
    return preco - (preco * desconto); // Preço final após aplicar desconto
}