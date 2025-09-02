/**
 * Rotação dos Elementos de um Array
Escreva um programa que permita ao usuário inserir 10 números inteiros em um array. O programa deve conter uma função que rotacione os elementos do array para a direita uma vez (o primeiro vai para o segundo, o segundo vai para o terceiro, até que o último elemento vai para o primeiro índice). Ao final, a função principal (main), deve exibir o array resultante.
 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);
void moveDireitaNVezes(int arr[], int tamanho, int vezes);
void swapPosicao(int* a, int* b);

int main() {
    bool condicaoLoop = false;
    do {
        int numeros[10];
        int vezes;
        cout << "Digite os elementos do array (10 no total): ";
        for (int i = 0; i < 10; i++) {
            cin >> numeros[i];
        }

        int tamanho = sizeof(numeros) / sizeof(numeros[0]);

        cout << "Digite o número de vezes que deseja mover o array para a direita: ";
        cin >> vezes;

        moveDireitaNVezes(numeros, tamanho, vezes);
        for (int i = 0; i < tamanho; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;

        cout << "A matriz original foi movida para a direita " << vezes << " vezes." << endl;

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
}

void swapPosicao(int* anterior, int* atual) {
    *atual = *anterior;
}

void moveDireitaNVezes(int arr[], int tamanho, int vezes) {
    for (int i = 0; i < vezes; i++) {
        int temp = arr[tamanho - 1];
        for (int j = 0; j < tamanho; j++) {
            swapPosicao(&arr[tamanho - j - 1], &arr[tamanho - j]);
        }
        arr[0] = temp;
    }
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