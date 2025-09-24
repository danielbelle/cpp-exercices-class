#include <deque>
#include <iostream>

using namespace std;

int main() {
    /* Fusão do vector e da lista | Permite acessar qualquer elemento por indice e facilita inserções e remoções em ambas as extremidades */

    deque<string> frutas = { "uva", "banana", "figo", "abacate" };

    cout << "Frutas na deque:" << endl;
    cout << "----------------" << endl;

    cout << "fruta[2]: " << frutas[2] << endl;
    cout << "fruta.at(1): " << frutas.at(1) << endl;

    cout << "Laço for-each (para todos da estrutura):" << endl;
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    frutas.at(2) = "laranja"; // alterando o terceiro elemento
    cout << "fruta.at(2): " << frutas.at(2) << endl;

    cout << "consulta front() e back()" << endl;
    cout << "fruta.front(): " << frutas.front() << endl;
    cout << "fruta.back(): " << frutas.back() << endl;

    cout << "Inserção com push_back() e push_front()" << endl;

    frutas.push_back("manga");
    frutas.push_front("abacaxi");

    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    cout << "Tamanho do deque: " << frutas.size() << endl;
    cout << "Remoção com pop_back() e pop_front()" << endl;
    frutas.pop_back();
    frutas.pop_front();
    cout << "Tamanho do deque: " << frutas.size() << endl;

    cout << "O deque está vazio? " << (frutas.empty() ? "sim" : "não") << endl;

    return 0;
}