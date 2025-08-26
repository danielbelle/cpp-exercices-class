/**
 * Exercícios de Programação sobre Comandos de Repetição While e Do_While
 Leia uma nota de um aluno (entre 0 e 10). Se o valor digitado for inválido, peça novamente até que o usuário digite um valor válido.
 */
#include <iostream>
#include <limits> 

using namespace std;

int main() {
    bool condicaoLoop = false;
    do {

        int nota;
        cout << "Digite uma nota entre 0 e 10: " << endl;
        cin >> nota;
        if (nota < 0 || nota > 10)
        {
            cout << "Por favor, digite uma nota entre 0 a 10." << endl;
            continue;
        }

        cout << "Nota válida: " << nota << endl;

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