/**
 * * * Estrutura de Dados - Listas Encadeadas
 * * *
 * * * Operação de Inserção em lista encadeada
 * *
 * 1) Lista vazia:
 * A) Alocar o espaço para o novo nó
 * B) Armazenar o Dado
 * C) Fazer o ponteiro do novo nó apontar para NULL
 * D) Fazer o ponteiro de início apontar para o novo nó
 *
 * 2) Lista não vazia:
 * A) Alocar o espaço para o novo nó
 * B) Armazenar o Dado
 * C) Fazer o ponteiro do novo nó apontar para o nó que o ponteiro de início está apontando
 * D) Fazer o ponteiro de início apontar para o novo nó
 *
 * 3) Incluir no final da lista:
 * A) Alocar o espaço para o novo nó
 * B) Armazenar o Dado
 * C) Fazer o ponteiro do novo nó apontar para NULL
 * D) Percorrer a lista até o último nó
 * E) Fazer o ponteiro do último nó apontar para o novo nó
 *
 * 4) Liberação da memória:
 * A) Apontar o candidato a ser removido
 * B) Inicio passa a apontar para o próximo nó
 * C) Liberar a memória do nó removido "temp"
 *
 */
#include <iostream>
using namespace std;

struct node {
    int info;
    node* prox;
};

struct nodeList {
    node* inicio = nullptr;

    void insere(int info) {
        // Cria novo nó (aloca a memoria com new) e
        // atualiza os dados com info e ponteiro com inicio

        node* novo = new node{ info, inicio };
        inicio = novo;
    }

    void insereFinal(int info) {
        // Apenas alocação na memoria
        node* novo = new node;
        // Armazena a informação
        novo->info = info;
        if (inicio == nullptr) {
            // Lista vazia
            novo->prox = nullptr;
            inicio = novo;
        }
        else {
            // Lista não vazia adicionar no final
            node* ultimo = inicio;
            while (ultimo->prox != nullptr) {
                ultimo = ultimo->prox;
            }
            ultimo->prox = novo;
            novo->prox = nullptr;
        }
    }

    void mostra() {
        if (inicio == nullptr) {
            cout << "Lista vazia\n";
            return;
        }
        else {
            node* elemento = inicio;
            while (elemento != nullptr) {
                cout << elemento->info << " ";
                elemento = elemento->prox;
            }
        }
    }
    void removeInicio() {
        if (inicio != nullptr) {

            node* temp = inicio;
            inicio = inicio->prox;
            delete temp;
        }
    }

};


int main() {
    nodeList minhaLista;

    minhaLista.insere(5);
    minhaLista.insere(10);
    minhaLista.insereFinal(20);
    minhaLista.mostra();
    minhaLista.removeInicio();
    minhaLista.mostra();


    return 0;
}

