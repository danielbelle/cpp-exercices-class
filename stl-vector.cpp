#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> frutas = { "uva", "banana", "figo", "abacate" };

    cout << "Frutas no vetor:" << endl;
    cout << "----------------" << endl;
    cout << "fruta[0]: " << frutas[0] << endl;
    cout << "fruta.at(0): " << frutas.at(0) << endl;
    cout << "fruta.front(): " << frutas.front() << endl;
    cout << "fruta.back(): " << frutas.back() << endl;

    // laço for-each (para todos da estrutura)
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    // Posso acessar por índice facilmente em vetores
    cout << "Acessando por índice:" << endl;
    cout << "fruta[2]: " << frutas[2] << endl;
    cout << "fruta.at(2): " << frutas.at(2) << endl;


    cout << "Inserção com push_back()" << endl;
    frutas.push_back("morango");
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    cout << "Inserção com pop_back()" << endl;
    frutas.pop_back();
    for (string fruta : frutas) {
        cout << "fruta: " << fruta << endl;
    }

    cout << "Tamanho do vetor: " << frutas.size() << endl;
    cout << "O vetor está vazio? " << (frutas.empty() ? "sim" : "não") << endl;


    return 0;
}