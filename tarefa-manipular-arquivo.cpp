/**
 * Manipulação de arquivos em C++
 * Exercício: Implemente um programa que permita ao usuário criar uma lista de tarefas. Cada tarefa deve ter um título, uma descrição, categoria (trabalho, pessoal, estudo, etc.) e prioridade de 1 a 5.
 */
#include <vector>
#include <iostream>
#include <limits> 
#include <fstream>
#include <iomanip>


using namespace std;
void verificaLeitura();
bool verificaLoop(string mensagem = "Digite 0 para sair ou 1 para continuar: ");

void adicionaTarefa(string titulo, string descricao, string categoria, int prioridade);
vector<string> titulos, descricoes, categorias;
vector<int> prioridades;

void escreveArquivo();
string entradaDeInformacao(int tipo);

int main() {
    bool condicaoLoop = false;
    bool escrevendo = false;
    string titulo, descricao, categoria;
    int prioridade;
    do {
        do
        {
            titulo = entradaDeInformacao(1);
            descricao = entradaDeInformacao(2);
            categoria = entradaDeInformacao(3);
            prioridade = stoi(entradaDeInformacao(4));

            adicionaTarefa(titulo, descricao, categoria, prioridade);

            verificaLeitura();
            escrevendo = verificaLoop("Digite 0 para parar de adicionar tarefas ou 1 para continuar: ");
        } while (escrevendo);



        escreveArquivo();
        cout << "Tarefas salvas em LISTA-DE-TAREFAS.txt" << endl;

        verificaLeitura();
        condicaoLoop = verificaLoop();
    } while (condicaoLoop);

    return 0;
}

string entradaDeInformacao(int tipo) {
    string entrada;
    int prioridade;
    switch (tipo) {
    case 1:
        cout << "Digite o título da tarefa: ";
        cin >> entrada;
        break;
    case 2:
        cout << "Digite a descrição da tarefa: ";
        cin >> entrada;
        break;
    case 3:
        cout << "Digite a categoria da tarefa (trabalho, pessoal, estudo, etc.): ";
        cin >> entrada;
        break;
    case 4:
        do {
            cout << "Digite a prioridade da tarefa (1 a 5): ";
            cin >> prioridade;
            verificaLeitura();
        } while (prioridade < 1 || prioridade > 5);
        entrada = to_string(prioridade);
        break;
    default:
        cout << "Tipo inválido!" << endl;
        break;

        return entrada;
    }


    verificaLeitura();
    return entrada;
}


void escreveArquivo() {
    string tabela[] = { "TITULO", "DESCRICAO", "CATEGORIA", "PRIORIDADE" };

    ofstream listaTarefa("LISTA-DE-TAREFAS.txt");

    for (string coluna : tabela) {
        if (coluna == "TITULO")
            listaTarefa << setw(20) << left << coluna;
        else
            listaTarefa << setw(20) << right << coluna;
    }
    listaTarefa << "\n";

    for (int i = 0; i < titulos.size(); i++) {
        listaTarefa << setw(20) << left << titulos.at(i);
        listaTarefa << setw(20) << right << descricoes.at(i);
        listaTarefa << setw(20) << right << categorias.at(i);
        listaTarefa << setw(20) << right << prioridades.at(i);
        listaTarefa << "\n";
    }

    listaTarefa.close();

}

void adicionaTarefa(string titulo, string descricao, string categoria, int prioridade) {
    titulos.push_back(titulo);
    descricoes.push_back(descricao);
    categorias.push_back(categoria);
    prioridades.push_back(prioridade);

}

void verificaLeitura() {
    //caso de falha na leitura
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

bool verificaLoop(string mensagem) {
    int opcao;
    do {
        cout << mensagem << endl;
        cin >> opcao;
        verificaLeitura();
    } while (opcao != 0 && opcao != 1);
    return (opcao == 1);
}