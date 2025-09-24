#include <list>
#include <iostream>

using namespace std;

int main() {
    list<string> frutas = { "uva", "banana", "figo", "abacate" };

    cout << "Frutas na lista:" << endl;
    cout << "----------------" << endl;
    /* Nao funcionam pois listas nao sao acessadas por indice
    cout << "fruta[0]: " << frutas[0] << endl;
    cout << "fruta.at(0): " << frutas.at(0) << endl;
    */
    cout << "fruta.front(): " << frutas.front() << endl;
    cout << "fruta.back(): " << frutas.back() << endl;
    frutas.front() = "laranja"; // alterando o primeiro elemento
    frutas.back() = "melancia"; // alterando o ultimo elemento
    cout << "fruta.front(): " << frutas.front() << endl;
    cout << "fruta.back(): " << frutas.back() << endl;

    // laço for-each (para todos da estrutura)
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }


    cout << "Inserção com push_back() e push_front()" << endl;
    frutas.push_back("manga");
    frutas.push_front("abacaxi");
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    cout << "Inserção com pop_back() e pop_front()" << endl;
    frutas.pop_back();
    frutas.pop_front();
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    cout << "Tamanho do vetor: " << frutas.size() << endl;
    cout << "O vetor está vazio? " << (frutas.empty() ? "sim" : "não") << endl;


    return 0;
}