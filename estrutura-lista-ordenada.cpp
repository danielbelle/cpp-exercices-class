/**
 * * * Estrutura de Dados - Listas Ordenadas
 * * *
 * * * Operação de Inserção em lista ordenada
 * *
 */
#include <iostream>
using namespace std;

struct node {
    int info;
    node* prox;
};

struct listaOrdenada {
    node* inicio = nullptr;

    void insere(int info) {
        node* novo = new node;
        novo->info = info;
        // se lista vazia
        if (inicio == nullptr) {
            inicio = novo;
            novo->prox = nullptr;
        }
        else {
            node* atual = inicio;
            // se for o menor elemento
            if (atual->info > novo->info) {
                novo->prox = atual;
                inicio = novo;
            }
            else {
                while (atual->prox != nullptr && atual->prox->info < novo->info) {
                    atual = atual->prox;
                }
                novo->prox = atual->prox;
                atual->prox = novo;
            }
        }
    }

};


int main() {

    listaOrdenada lista;
    lista.insere(30);
    lista.insere(10);
    lista.insere(20);
    lista.insere(40);
    lista.insere(25);

    return 0;
}

