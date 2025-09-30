/*
* Manipuladores de Saída
* Manipuladores são funções que alteram o comportamento dos fluxos de entrada e saída.
* Eles são usados para formatar a saída de dados, como números, strings e booleanos.
* Alguns manipuladores comuns incluem:
* - std::hex, std::dec, std::oct: Alteram a base numérica (hexadecimal, decimal, octal).
* - std::fixed, std::scientific: Alteram a notação de ponto flutuante (ponto fixo, notação científica).
* - std::setprecision(n): Define o número de casas decimais para números de ponto flutuante.
* - std::setw(n): Define a largura do campo para a próxima saída.
* - std::setfill(c): Define o caractere de preenchimento para a próxima saída.
* - std::left, std::right: Alinha a saída à esquerda ou à direita dentro do campo definido por setw.
* - std::boolalpha, std::noboolalpha: Controla a exibição de valores booleanos como "true"/"false" ou "1"/"0".
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int num = 671;

    // Manipuladores de números
    cout << num << endl;
    cout << hex << num << endl; // hexadecimal
    cout << oct << num << endl; // octal
    cout << dec << num << endl; // decimal
    cout << showbase << hex << num << endl; // hexadecimal with base
    cout << showbase << oct << num << endl; // octal with base
    cout << dec << num << endl; // decimal


    // Manipuladores de ponto flutuante
    double valor = 1786.576;
    cout << valor << endl;
    cout << fixed << setprecision(4) << valor << endl; // ponto fixo com 4 casas decimais
    cout << scientific << setprecision(5) << valor << endl; // notação científica com 5 casas decimais
    cout << defaultfloat << valor << endl; // notação padrão

    cout << fixed; // ponto fixo para os próximos valores
    double numeros[] = { 1.75, 13.1, 14.567, 120.2, 1300.68, 890 };
    for (double numero : numeros) {
        cout << setw(9) << setprecision(2) << fixed << numero << endl; // largura 9 (contando o ponto), 2 casas decimais e valores fixados e alinhados à direita
    }

    string frutas[] = { "banana", "melancia", "laranja", "uva", "abacaxi", "kiwi", "fruta-do-conde" };
    for (string fruta : frutas) {
        cout << setw(15) << left << setfill('.') << fruta << "----" << "\n";
    }


    bool opcao = true;
    bool outro = false;
    cout << opcao << " " << outro << endl; // 1 0
    cout << boolalpha << opcao << " " << outro << endl; // true false

    return 0;
}