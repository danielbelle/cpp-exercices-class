/**
 *ETAPA 1: Considere uma situação em que é necessário implementar algumas funcionalidades de um diário escolar. Para esse momento, só são permitidos para uso os tipos de dados primitivos e arrays. O diário precisa considerar o armazenamento das seguintes informações:
 ● código do aluno (pode ser alfanumérico, conforme a necessidade);
 ● o nome do aluno;
 ● as notas das avaliações (mínimo de 2, máximo de 10);
 ● número de faltas;
 ● média dos alunos.
Implemente um código C++ que declare essas estruturas de dados.
 ETAPA 2: Implemente uma ou mais funções que permitam ler a quantidade de alunos e de avaliações do semestre. Em seguida, crie essas estruturas.
 ETAPA 3: Implemente uma ou mais funções que permitam ler o código e o nome dos alunos e armazene-os nas estruturas de dados criadas.
 ETAPA 4: Implemente uma ou mais funções que permitam ler a nota de uma ou mais avaliações do semestre e armazene-as nas estruturas de dados criadas.
 ETAPA 5: Implemente uma função que calcule a média dos alunos e armazene na estrutura de dados criada.
 ETAPA 6: Implemente uma função que leia a quantidade de faltas dos alunos e armazene na estrutura de dados criada.
 ETAPA 7: Implemente uma função que imprima um relatório de todos os alunos com média e faltas.

 */
#include <iostream>
#include <limits> 
#include <string>
#include <iomanip>


using namespace std;
void verificaLeitura();
bool verificaLoop();
void criaAlunos(int quant);
void criaNotas(int alunos, int quantNotas);
void leituraAlunos(int numAlunos);
void leituraAluno(int indice);
void leituraAvaliacao(int numAlunos, int numAvaliacao);
void leituraTodasAvaliacoes(int numAlunos, int numNotas);
void atualizaMedia(int numAlunos, int numNotas);
void leituraFaltas(int numAlunos);
void imprimeRelatorio(int numAlunos);
void liberarMemoria(int numAlunos);
int quantasAvaliacoes(), quantosAlunos();


string* codigo;
string* nome;
double** notas;
int* faltas;
double* media;


int main() {
    bool condicaoLoop = false;

    do {
        int numAlunos, numNotas;
        numAlunos = quantosAlunos();
        numNotas = quantasAvaliacoes();
        criaAlunos(numAlunos);
        criaNotas(numAlunos, numNotas);
        leituraAlunos(numAlunos);
        leituraTodasAvaliacoes(numAlunos, numNotas);
        atualizaMedia(numAlunos, numNotas);
        leituraFaltas(numAlunos);
        imprimeRelatorio(numAlunos);

        liberarMemoria(numAlunos);
        verificaLeitura();
        condicaoLoop = verificaLoop();

    } while (condicaoLoop);


    return 0;
}

int quantosAlunos() {
    int numAlunos;
    do {
        cout << "Quantos alunos (1 a 100)? ";
        cin >> numAlunos;
        verificaLeitura();
    } while (numAlunos < 1 || numAlunos > 100);
    return numAlunos;
}

int quantasAvaliacoes() {
    int numNotas;
    do {
        cout << "Quantas avaliacoes (2 a 10)? ";
        cin >> numNotas;
        verificaLeitura();
    } while (numNotas < 2 || numNotas > 10);
    return numNotas;
}

void criaAlunos(int quant) {
    codigo = new string[quant];
    nome = new string[quant];
    notas = new double* [quant];
    faltas = new int[quant];
    media = new double[quant];
}

void criaNotas(int alunos, int quantNotas) {
    for (int i = 0; i < alunos; i++) {
        notas[i] = new double[quantNotas];
    }
}

void leituraAluno(int indice) {
    cout << "Codigo[" << indice << "]: ";
    cin >> codigo[indice];
    cout << "Aluno[" << indice << "]: ";
    cin >> nome[indice];
}

void leituraAlunos(int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        leituraAluno(i);
    }
}

void leituraAvaliacao(int numAlunos, int numAvaliacao) {
    for (int i = 0; i < numAlunos; i++) {
        double nota;
        do {
            cout << "Aluno: " << nome[i] << endl;
            cout << "Nota " << numAvaliacao + 1 << " (0-10): ";
            cin >> nota;
        } while (nota < 0 || nota > 10);
        notas[i][numAvaliacao] = nota;
    }
}

void leituraTodasAvaliacoes(int numAlunos, int numNotas) {
    for (int i = 0; i < numNotas; i++) {
        leituraAvaliacao(numAlunos, i);
    }
}

void atualizaMedia(int numAlunos, int numNotas) {
    double soma;
    for (int a = 0; a < numAlunos; a++) {
        soma = 0;
        for (int n = 0; n < numNotas; n++) {
            soma += notas[a][n];
        }
        media[a] = soma / numNotas;
    }
}

void leituraFaltas(int numAlunos) {
    for (int i = 0; i < numAlunos; i++) {
        int falta;
        do {
            cout << "Faltas do aluno " << nome[i] << " (≥ 0): ";
            cin >> falta;
        } while (falta < 0);
        faltas[i] = falta;
    }
}

void imprimeRelatorio(int numAlunos) {
    cout << "\n=== RELATORIO DE ALUNOS ===\n";
    cout << "=============================================\n";
    for (int i = 0; i < numAlunos; i++) {
        cout << "Codigo: " << codigo[i]
            << " | Aluno: " << nome[i]
            << " | Media: " << fixed << setprecision(1) << media[i]
            << " | Faltas: " << faltas[i] << endl;
    }
    cout << "=============================================\n";
}

void liberarMemoria(int numAlunos) {
    if (codigo) delete[] codigo;
    if (nome) delete[] nome;
    if (notas) {
        for (int i = 0; i < numAlunos; i++) {
            if (notas[i]) delete[] notas[i];
        }
        delete[] notas;
    }
    if (faltas) delete[] faltas;
    if (media) delete[] media;

    // Reinicializar ponteiros
    codigo = nullptr;
    nome = nullptr;
    notas = nullptr;
    faltas = nullptr;
    media = nullptr;
}

void verificaLeitura() {
    //caso de falha na leitura
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

bool verificaLoop() {
    int opcao;
    do {
        cout << "Digite 0 para sair ou 1 para continuar: ";
        cin >> opcao;
        verificaLeitura();
    } while (opcao != 0 && opcao != 1);
    return (opcao == 1);
}