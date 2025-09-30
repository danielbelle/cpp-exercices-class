/*
* manipuladores de arquivos
*
*/

#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ofstream arquivo("meus-dados.txt");


    arquivo << "ALGUNS DADOS" << endl;
    arquivo << 12345 << endl;
    arquivo << 2.768 << endl;

    arquivo.close();

    return 0;
}