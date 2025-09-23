/**
* * * Estrutura de Dados - Pilhas
* * *
* * * Operação de Inserção e Remoção em pilha
* *
* 1) Pilha vazia:
* A) Alocar o espaço para o novo nó
* B) Armazenar o Dado
* C) Fazer o ponteiro do novo nó apontar para NULL
* D) Fazer o ponteiro do topo apontar para o novo nó
*
* 2) Pilha não vazia:
* A) Alocar o espaço para o novo nó
* B) Armazenar o Dado
* C) Fazer o ponteiro do novo nó apontar para o topo
* D) Fazer o ponteiro do topo apontar para o novo nó
*
* 3) Liberação da memória:
* A) Apontar o candidato a ser removido
* B) Topo passa a apontar para o próximo nó
* C) Liberar a memória do nó removido "temp"
* D) Retornar o valor do nó removido
*
* 4) Consultar o valor do topo:
* A) Retornar o valor do nó que o ponteiro topo está apontando
* B) Se a pilha estiver vazia, retornar um valor indicativo (por exemplo, -1)
**/

#include <iostream>
using namespace std;

struct node {
    int info;
    node* prox;
};

struct stack {
    node* topo = nullptr;

    void push(int info) {
        node* novo = new node();
        novo->info = info;
        novo->prox = topo;
        topo = novo;
    }

    int pop() {
        if (topo != nullptr) {
            node* temp = topo;
            topo = topo->prox;
            int valor = temp->info;
            delete temp; // Libera a memória do nó removido
            return valor;
        }
        else {
            cout << "Pilha vazia\n";
            return -1; // Indica que a pilha está vazia
        }
    }

    int peak() {
        if (topo != nullptr) {
            return topo->info;
        }
        else {
            cout << "Pilha vazia\n";
            return -1; // Indica que a pilha está vazia
        }
    }
};


int main() {


    stack pilha;
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    cout << pilha.pop() << endl; // Deve imprimir 4
    cout << pilha.pop() << endl; // Deve imprimir 3
    cout << pilha.peak() << endl; // Deve imprimir 2
    cout << pilha.peak() << endl; // Deve imprimir 2


    return 0;
}