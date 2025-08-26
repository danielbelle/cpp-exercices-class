/**
 *

 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);

int main() {
    bool condicaoLoop = false;
    do {



        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
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

bool verificaLoop(bool condicaoLoop) {
    cout << "Digite 0 para sair ou 1 para continuar: " << endl;
    cin >> condicaoLoop;
    if (condicaoLoop != 0) {
        !condicaoLoop;
    }
    return condicaoLoop;
}