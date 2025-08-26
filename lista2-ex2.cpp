/**
 * Exercícios de Programação sobre Comandos de Repetição While e Do_While
 Leia vários números inteiros do usuário e calcule a soma deles. O programa deve parar quando o usuário digitar 0
 */
#include <iostream>
#include <limits> 

using namespace std;

int main() {
    bool condicaoLoop = false;
    do {

        double soma = 0;
        int valorEntrada;


        do {
            cout << "Digite um número para somar ou 0 para sair: ";
            cin >> valorEntrada;
            soma += valorEntrada;

            cout << "SOMA: " << soma << endl;
        } while (valorEntrada != 0);

        //caso de falha na leitura
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        if (valorEntrada != 0) {
            condicaoLoop = true;
        }
        else {
            condicaoLoop = false;
            cout << "Programa finalizado." << endl;
        }

    } while (condicaoLoop);

    return 0;
}