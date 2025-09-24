#include <stack>
#include <iostream>

using namespace std;

int main() {
    /* LEMBRAR SEMPRE de um poço, posso so adicionar e retirar pelo mesmo buraco*/
    /*Nao pode inserir elementos na criação*/
    stack<string> frutas;

    frutas.push("uva");
    frutas.push("banana");
    frutas.push("figo");
    frutas.push("abacate");

    cout << "Frutas na stack:" << endl;
    cout << "----------------" << endl;
    /* Nao funcionam pois listas nao sao acessadas por indice
    cout << "fruta[0]: " << frutas[0] << endl;
    cout << "fruta.at(0): " << frutas.at(0) << endl;
    */
    /*Nao existe front() e back() em pilhas*/

    cout << "fruta.top(): " << frutas.top() << endl;
    frutas.pop();
    cout << "fruta.top(): " << frutas.top() << endl;

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