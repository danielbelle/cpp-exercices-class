/**
 * Exercícios de Programação sobre Comandos de Repetição While e Do_While
 Peça ao usuário um número inteiro n e exiba os primeiros n termos da sequência de Fibonacci usando while.

O que é a sequência de Fibonacci?

A sequência de Fibonacci é uma sucessão numérica em que cada termo, a partir do terceiro, é a soma dos dois anteriores. Os dois primeiros termos geralmente são definidos como 1 e 1. Assim:

1, 1, 2, 3, 5, 8, 13, 21, 34, …
 */
#include <iostream>
#include <limits> 

using namespace std;

int main() {
    bool condicaoLoop = false;
    do {

        int i = 0;
        int n;
        double termo = 1, proxTermo = 0;
        cout << "Sequência de Fibonacci" << endl;
        cout << "Digite um número inteiro e positivo: " << endl;
        cin >> n;
        if (n <= 0)
        {
            cout << "Por favor, digite um número inteiro e positivo." << endl;
            continue;
        }

        do {
            proxTermo += termo;
            termo = proxTermo - termo;
            cout << proxTermo << " ";
            i++;
        } while (i < n);
        cout << endl;

        //caso de falha na leitura
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        cout << "Digite 0 para sair ou 1 para continuar: " << endl;
        cin >> condicaoLoop;
        if (condicaoLoop != 0) {
            condicaoLoop = true;
        }
        else {
            condicaoLoop = false;
        }

    } while (condicaoLoop);

    return 0;
}