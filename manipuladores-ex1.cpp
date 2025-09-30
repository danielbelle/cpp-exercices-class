/*
* Exercício 1: Crie um programa que exiba uma tabela de produtos com as colunas: Produto, Quantidade, Preço Unitário e Preço Total.
* Utilize os manipuladores de fluxo para formatar a saída, alinhando as colunas e definindo a precisão dos preços com duas casas decimais.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double somaTotal = 0.0;

    string produtos[] = { "agua mineral", "refrigerante", "suco", "copo descartavel" };
    int quantidades[] = { 120, 50, 60, 250 };
    double precounit[] = { 0.69, 2.45, 5.7, 0.2 };


    //1
    string tabela[] = { "PRODUTO", "QUANTIDADE", "PRECO UNITARIO", "PRECO TOTAL" };

    for (string coluna : tabela) {
        if (coluna == "PRODUTO")
            cout << setw(20) << left << coluna;
        else
            cout << setw(20) << right << coluna;
    }
    cout << "\n";

    for (int i = 0; i < 4; i++) {
        double total = quantidades[i] * precounit[i];
        cout << setw(20) << left << produtos[i];
        cout << setw(20) << right << quantidades[i];
        cout << setw(20) << setprecision(2) << fixed << right << precounit[i];
        cout << setw(20) << setprecision(2) << fixed << right << total << "\n";
        somaTotal += total;
    }
    cout << setw(60) << right << "TOTAL:";
    cout << setw(20) << right << setprecision(2) << fixed << somaTotal;
    cout << "\n";
}