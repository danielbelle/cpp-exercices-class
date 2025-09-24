#include <set>
#include <iostream>

using namespace std;

int main() {
    /* Nao pode adicionar valores repetidos */

    set<int> conjunto = { 1,2,90,1,4,5 }; // valores repetidos sao ignorados
    set<int, greater<int>> conjunto2 = { 1,2,90,1,4,5 }; // ordem decrescente

    cout << "Elementos do set:" << endl;

    conjunto.insert(2);
    cout << "Tamanho do set: " << conjunto.size() << endl;
    conjunto.insert(3);
    cout << "Tamanho do set: " << conjunto.size() << endl;
    for (int elemento : conjunto) {
        cout << "conjunto: " << elemento << endl;
    }

    for (int elemento : conjunto2) {
        cout << "conjunto2: " << elemento << endl;
    }

    conjunto.erase(2);
    cout << "Tamanho do set apos remover o 2: " << conjunto.size() << endl;


    cout << "O set está vazio? " << (conjunto.empty() ? "sim" : "não") << endl;

    return 0;
}