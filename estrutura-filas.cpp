/**
* * * Estrutura de Dados - Filas
* * *
* * * Operação de Inserção e Remoção em fila
* *
* 1) Fila vazia:
* A) Alocar o espaço para o novo nó
* B) Armazenar o Dado
* C) Fazer o ponteiro do novo nó apontar para NULL
* D) Fazer o ponteiro do início apontar para o novo nó
*
* 2) Fila não vazia:
* A) Alocar o espaço para o novo nó
* B) Armazenar o Dado
* C) Fazer o ponteiro do novo nó apontar para NULL
* D) Fazer o ponteiro do último nó apontar para o novo nó
*
* 3) Liberação da memória:
* A) Apontar o candidato a ser removido
* B) Início passa a apontar para o próximo nó
* C) Liberar a memória do nó removido "temp"
*
* 4) Consultar o valor do início:
* A) Retornar o valor do nó que o ponteiro início está apontando
* B) Se a fila estiver vazia, retornar um valor indicativo (por exemplo, -1)
**/

#include <iostream>
using namespace std;

struct node {
    int info;
    node* prox;
};

struct fila {
    node* cabeca = nullptr;
    node* cauda = nullptr;

    void enfileira(int info) {

        node* novo = new node;
        novo->info = info;
        novo->prox = nullptr;

        if (cabeca == nullptr) {
            // Fila vazia
            cabeca = novo;
            cauda = novo;
        }
        // Fila não vazia
        cauda->prox = novo;
        cauda = cauda->prox;
    }

    int desenfileirar() {
        node* temp = cabeca;

        if (cabeca == cauda) {
            // Se sao iguais, so tem um elemento na fila
            cabeca = nullptr;
            cauda = nullptr;

        }
        else {
            cabeca = cabeca->prox;
        }
        int info = temp->info;
        delete temp; // Libera a memória do nó removido
        return info;
    }

    int peak() {
        if (cabeca != nullptr) {
            return cabeca->info;
        }
        else {
            cout << "Fila vazia\n";
            return -1; // Indica que a fila está vazia
        }
    }
};

int main() {

    fila minhaFila;
    minhaFila.enfileira(1);
    minhaFila.enfileira(2);
    minhaFila.enfileira(3);
    minhaFila.enfileira(4);
    cout << minhaFila.desenfileirar() << endl; // Deve imprimir 1
    minhaFila.enfileira(5);
    minhaFila.enfileira(6);
    minhaFila.enfileira(7);
    minhaFila.enfileira(8);
    cout << minhaFila.desenfileirar() << endl; // Deve imprimir 2
    cout << minhaFila.desenfileirar() << endl; // Deve imprimir 3
    cout << minhaFila.peak() << endl; // Deve imprimir 4
    cout << minhaFila.desenfileirar() << endl; // Deve imprimir 4
    cout << minhaFila.peak() << endl; // Deve imprimir 5

    return 0;
}