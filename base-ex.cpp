/**
 *

 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop();

int main() {
    bool condicaoLoop = false;
    do {



        verificaLeitura();
        condicaoLoop = verificaLoop();
    } while (condicaoLoop);

    return 0;
}

void verificaLeitura() {
    //caso de falha na leitura
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

bool verificaLoop() {
    int opcao;
    do {
        cout << "Digite 0 para sair ou 1 para continuar: ";
        cin >> opcao;
        verificaLeitura();
    } while (opcao != 0 && opcao != 1);
    return (opcao == 1);
}