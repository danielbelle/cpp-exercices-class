/**
 * Funções em C++
 Escreva uma função que receba como parâmetro um número inteiro, no intervalo de 1 a 20, e retorne uma String correspondente ao número por extenso. Caso o número seja menor que 1 ou maior que 20, o método deve retornar o texto “inválido”.
 */
#include <iostream>
#include <limits> 
#include <array>

using namespace std;
void verificaErroLeitura();
bool verificaLoop(bool condicaoLoop);
string numeroPorExtenso(int numero);

int main() {
    bool condicaoLoop = false;
    do {
        int numero;
        cout << "Digite um número entre 1 e 20: ";
        cin >> numero;
        cout << numeroPorExtenso(numero) << endl;



        verificaErroLeitura();
    } while (verificaLoop(condicaoLoop));

    return 0;
}

string numeroPorExtenso(int numero) {
    array<string, 20> numerosExtenso = { "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove", "vinte" };
    string numeroRetorno;
    if (numero >= 1 && numero <= 20) {
        numeroRetorno = numerosExtenso[numero - 1];
    }
    else {
        numeroRetorno = "inválido";
    }
    return numeroRetorno;
}


void verificaErroLeitura() {
    //caso de falha na leitura
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

bool verificaLoop(bool condicaoLoop) {
    cout << "Digite 0 para sair ou 1 para continuar: " << endl;
    cin >> condicaoLoop;
    if (condicaoLoop != 0) {
        !condicaoLoop;
    }
    return condicaoLoop;
}