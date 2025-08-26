/**
 * Funções em C++
Escreva uma função recursiva que calcule a potência XN. Nesse exemplo, X é um valor real e N é um valor inteiro. Ambos são passados como parâmetros de entrada da função.
 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);
double potencia(double base, int expoente);

int main() {
    bool condicaoLoop = false;
    do {
        double base;
        int expoente;
        cout << "Digite a base (X): ";
        cin >> base;
        cout << "Digite o expoente (N): ";
        cin >> expoente;
        cout << "O resultado de " << base << "^" << expoente << " é: " << potencia(base, expoente) << endl;

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
}

double potencia(double base, int expoente) {
    return (expoente == 0) ? 1 : base * potencia(base, expoente - 1);
}

void verificaLeitura() {
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