#include <queue>
#include <iostream>

using namespace std;

int main() {
    /* Lembrar de um cano, que posso inserir elementos de um lado e retirar do outro */
    /*Nao pode inserir elementos na criação*/
    queue<string> frutas;

    frutas.push("uva");
    frutas.push("banana");
    frutas.push("figo");
    frutas.push("abacate");

    cout << "Frutas na queue:" << endl;
    cout << "----------------" << endl;
    /* Nao funcionam pois listas nao sao acessadas por indice
    cout << "fruta[0]: " << frutas[0] << endl;
    cout << "fruta.at(0): " << frutas.at(0) << endl;
    */
    /*Nao existe front() e back() em pilhas*/

    frutas.pop();
    cout << "fruta.front(): " << frutas.front() << endl;
    cout << "fruta.back(): " << frutas.back() << endl;

    /* pilha nao permite percorrer todos os elementos
        // laço for-each (para todos da estrutura)
        for (string fruta : frutas) {
            cout << "fruta: " << fruta << endl;
        }
    */
    // Remoção do ultimo elemento inserido (topo da pilha)
    cout << "Após um pop()" << endl;
    frutas.pop();

    cout << "Tamanho do vetor: " << frutas.size() << endl;
    cout << "O vetor está vazio? " << (frutas.empty() ? "sim" : "não") << endl;


    return 0;
}