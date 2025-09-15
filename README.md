# Lista de Exercícios em C++

Repositório com soluções de listas de exercícios em C++ (introdução à lógica,
laços, funções e arrays). Cada arquivo `.cpp` contém no topo o enunciado
resumido e o código comentado.

## Modelo Base

Todos os exemplos podem seguir o modelo em [`base-ex.cpp`](./base-ex.cpp):

```cpp
/**
 *
 */
#include <iostream>
#include <limits>

using namespace std;
void verificaLeitura();
bool verificaLoop();

int main() {
    bool condicaoLoop = false;
    do {

        // SEU CODIGO AQUI

        verificaLeitura();
        condicaoLoop = verificaLoop();
    } while (condicaoLoop);
    return 0;
}

void verificaLeitura() {
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
```

## Questões Resolvidas

### Lista 1

- **Questão 1**  
  Um analista avalia duas notas (0 a 10). Se ambas ≥ 9, o resultado é a maior.
  Se ambas > 5, resultado é a média. Se alguma ≤ 5, resultado é a menor.  
  [lista1-ex1.cpp](./lista1-ex1.cpp)

- **Questão 2**  
  Configuração de veículo (modelo A/B/C, bateria X/Y/Z, roda 14/15/16) validando
  combinações permitidas.  
  [lista1-ex2.cpp](./lista1-ex2.cpp)

- **Questão 3**  
  Classificação de infração de velocidade considerando erro padrão de 7 km/h e
  faixas percentuais do limite.  
  [lista1-ex3.cpp](./lista1-ex3.cpp)

### Lista 2 (While / Do-While)

- **Questão 1**  
  Exibe os primeiros n termos da sequência de Fibonacci.  
  [lista2-ex1.cpp](./lista2-ex1.cpp)

- **Questão 2**  
  Soma números até entrada 0.  
  [lista2-ex2.cpp](./lista2-ex2.cpp)

- **Questão 3**  
  Lê nota válida (0 a 10) repetindo até ser correto.  
  [lista2-ex3.cpp](./lista2-ex3.cpp)

### Lista 3 (Funções)

- **Questão 1**  
  Número (1–20) por extenso ou “inválido”.  
  [lista3-ex1.cpp](./lista3-ex1.cpp)

- **Questão 2**  
  n-ésimo Fibonacci (recursivo).  
  [lista3-ex2.cpp](./lista3-ex2.cpp)

- **Questão 3**  
  Potência X^N recursiva.  
  [lista3-ex3.cpp](./lista3-ex3.cpp)

- **Questão 4**  
  Demonstra uso de funções e constantes de `<cmath>` (mínimo 10 funções e 3
  constantes).  
  [lista3-ex4.cpp](./lista3-ex4.cpp)

### Lista 4 (Arrays / Rotação)

- **Questão 1**  
  Rotaciona array de 10 inteiros 1 passo à direita N vezes.  
  [lista4-ex1.cpp](./lista4-ex1.cpp)

- **Questão 2**  
  Rotaciona array com direção (`forward`) e passos (`steps` > 0; senão assume
  1).  
  [lista4-ex2.cpp](./lista4-ex2.cpp)

### Exercício Guiado

- **Diário Escolar (Estruturas com arrays e alocação dinâmica)**  
  Cadastro de alunos, códigos, notas (2–10), faltas, médias e relatório final.  
  [exercicio-guiado.cpp](./exercicio-guiado.cpp)

## Como Clonar e Executar

```bash
git clone https://github.com/danielbelle/cpp-exercices-class.git
cd cpp-exercices-class
code .
```

Para compilar (Windows com g++ instalado):

```bash
g++ lista1-ex1.cpp -o lista1-ex1.exe
.\lista1-ex1.exe
```

Ou use tarefa de build (Ctrl+Shift+B) no VS Code.

## Dica: C++ no VS Code

Configuração do ambiente:  
https://www.youtube.com/watch?v=DMWD7wfhgNY

Instale:

- C/C++ (Microsoft)
- Compiler (MinGW / MSYS2 ou WSL)
- Configure tasks e launch se desejar depuração.

## Estrutura Sugerida

- Reutilize `verificaLeitura()` e `verificaLoop()` para controlar loops.
- Comente sempre o propósito de variáveis e condições.

---
