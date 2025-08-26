/**
 *Funções em C++
Criar uma função para calcular o n-ésimo número da série de Fibonacci. A série inicia com os valores 1 e 1, e os números subsequentes são a soma dos dois anteriores. (ex.: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...)
 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);
int fibonacci(int n);

int main() {
    bool condicaoLoop = false;
    do {
        int n;
        cout << "Digite o valor de n, para saber o enésimo valor de Fibonacci: ";
        cin >> n;
        cout << "O " << n << "º número de Fibonacci é: " << fibonacci(n) << endl;

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
}

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
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