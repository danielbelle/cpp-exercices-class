/*
* Exercício 1: Crie um programa que exiba uma tabela de produtos com as colunas: Produto, Quantidade, Preço Unitário e Preço Total.
* Utilize os manipuladores de fluxo para formatar a saída, alinhando as colunas e definindo a precisão dos preços com duas casas decimais.
* Salve essa tabela em um arquivo chamado "produtos.txt".
*/

#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    ofstream arqProd("produtos.txt");
    double somaTotal = 0.0;

    string produtos[] = { "agua mineral", "refrigerante", "suco", "copo descartavel" };
    int quantidades[] = { 120, 50, 60, 250 };
    double precounit[] = { 0.69, 2.45, 5.7, 0.2 };


    //1
    string tabela[] = { "PRODUTO", "QUANTIDADE", "PRECO UNITARIO", "PRECO TOTAL" };

    for (string coluna : tabela) {
        if (coluna == "PRODUTO")
            arqProd << setw(20) << left << coluna;
        else
            arqProd << setw(20) << right << coluna;
    }
    arqProd << "\n";

    for (int i = 0; i < 4; i++) {
        double total = quantidades[i] * precounit[i];
        arqProd << setw(20) << left << produtos[i];
        arqProd << setw(20) << right << quantidades[i];
        arqProd << setw(20) << setprecision(2) << fixed << right << precounit[i];
        arqProd << setw(20) << setprecision(2) << fixed << right << total << "\n";
        somaTotal += total;
    }
    arqProd << setw(60) << right << "TOTAL:";
    arqProd << setw(20) << right << setprecision(2) << fixed << somaTotal;
    arqProd << "\n";

    arqProd.close();

    return 0;
}