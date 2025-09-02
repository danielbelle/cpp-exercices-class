/**
 * Rotação dos Elementos de um Array
Implemente uma função que rotacione os elementos do array. A função deve receber, além do array, mais dois parâmetros:

forward (bool) : se true, a rotação ocorre dos menores índices para os maiores, se false, o sentido inverte
steps (int): indica quantos índices a rotação deve avançar, se  por acaso o usuário informar um número não positivo, a rotação ocorre de 1 em 1.
Escreva também uma função principal (main) para testar o seu código.
 */
#include <iostream>
#include <limits> 

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);
void rotacionaEditado(int arr[], int tamanho, bool forward, int steps);
void swapPosicao(int* a, int* b);
int main() {
    bool condicaoLoop = false;
    do {
        int numeros[10];
        int steps = 3;
        bool forward;

        cout << "Digite os elementos do array (10 no total): ";
        for (int i = 0; i < 10; i++) {
            cin >> numeros[i];
        }
        cout << "Digite 1 para mover dos indices menores para os maiores e 0 para o sentido contrário: ";
        cin >> forward;
        int tamanho = sizeof(numeros) / sizeof(numeros[0]);

        cout << "Digite o número de passos que deseja mover o array: ";
        cin >> steps;

        rotacionaEditado(numeros, tamanho, forward, steps);
        for (int i = 0; i < tamanho; i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;

        cout << "A matriz original foi movida para a direita " << steps << " vezes." << endl;

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
}

void swapPosicao(int* atual, int* movimentado) {
    *atual = *movimentado;
}


void rotacionaEditado(int arr[], int tamanho, bool forward, int steps) {
    if (steps <= 0) {
        steps = 1;
    }

    for (int s = 0; s < steps; s++) {
        if (forward) {
            int temp = arr[tamanho - 1];
            for (int i = tamanho - 1; i > 0; i--) {
                swapPosicao(&arr[i], &arr[i - 1]);
            }
            arr[0] = temp;
        }
        else {
            int temp = arr[0];
            for (int i = 0; i < tamanho - 1; i++) {
                swapPosicao(&arr[i], &arr[i + 1]);
            }
            arr[tamanho - 1] = temp;
        }
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