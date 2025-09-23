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
  Número (1–20) por extenso ou "inválido". [lista3-ex1.cpp](./lista3-ex1.cpp)

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

## Estruturas de Dados Implementadas

### Estruturas Customizadas (Implementação Manual)

- **Lista Encadeada**  
  Implementação básica de lista ligada com inserção no início, final e
  remoção.  
  Permite armazenamento dinâmico de elementos com ponteiros.  
  [estrutura-lista.cpp](./estrutura-lista.cpp)

- **Lista Ordenada**  
  Lista ligada que mantém elementos ordenados automaticamente durante a
  inserção.  
  Útil quando é necessário manter dados sempre em ordem crescente.  
  [estrutura-lista-ordenada.cpp](./estrutura-lista-ordenada.cpp)

- **Pilha (Stack)**  
  Estrutura LIFO (Last In, First Out) com operações push, pop e peek.  
  Simula comportamento de uma pilha de pratos - último a entrar é primeiro a
  sair.  
  [estrutura-pilhas.cpp](./estrutura-pilhas.cpp)

- **Fila (Queue)**  
  Estrutura FIFO (First In, First Out) com operações enfileirar, desenfileirar e
  peek.  
  Simula uma fila comum - primeiro a entrar é primeiro a sair.  
  [estrutura-filas.cpp](./estrutura-filas.cpp)

## STL (Standard Template Library)

### Contêineres Sequenciais

- **Vector**  
  Array dinâmico que permite acesso aleatório por índice e redimensionamento
  automático.  
  Ideal para casos onde se precisa de acesso rápido por posição e crescimento
  dinâmico.  
  [stl-vector.cpp](./stl-vector.cpp)

- **List**  
  Lista duplamente ligada que facilita inserções/remoções no meio da
  estrutura.  
  Não permite acesso por índice, mas é eficiente para inserções em qualquer
  posição.  
  [stl-list.cpp](./stl-list.cpp)

- **Deque (Double-ended queue)**  
  Combina vantagens de vector e list: acesso por índice + inserção eficiente nas
  extremidades.  
  É uma "fila de duas pontas" que permite operações rápidas no início e fim.  
  [stl-deque.cpp](./stl-deque.cpp)

### Adaptadores de Contêiner

- **Stack**  
  Adaptador que transforma outros contêineres em pilha LIFO.  
  Oferece apenas operações push(), pop(), top() e size().  
  [stl-stack.cpp](./stl-stack.cpp)

- **Queue**  
  Adaptador que transforma outros contêineres em fila FIFO.  
  Oferece operações push(), pop(), front(), back() e size().  
  [stl-queue.cpp](./stl-queue.cpp)

## Exemplos Adicionais

### Funções Matemáticas e Utilitárias

- **Funções com `<cmath>`**  
  Demonstra cálculos de circunferência, área, volume e área superficial de
  esferas.  
  Utiliza constantes como `M_PI` e funções como `pow()`.  
  [funcao.cpp](./funcao.cpp)

### Ponteiros e Manipulação de Arrays

- **Ponteiro Básico**  
  Função que recupera notas de alunos e calcula média usando ponteiros para
  retorno múltiplo.  
  [ponteiro1.cpp](./ponteiro1.cpp)

- **Inversão de Array com Ponteiros**  
  Implementa função swap e inversão de array usando aritmética de ponteiros.  
  [ponteiro2.cpp](./ponteiro2.cpp)

- **Array de Ponteiros**  
  Demonstra como usar um array de ponteiros para acessar múltiplos arrays.  
  [ponteiro4.cpp](./ponteiro4.cpp)

### Utilitários

- **Verificação de Versão C++**  
  Programa simples que identifica qual padrão C++ está sendo usado na
  compilação.  
  [version.cpp](./version.cpp)

## Comparativo: Quando Usar Cada Estrutura

| Estrutura | Acesso por Índice | Inserção Início | Inserção Fim | Inserção Meio | Uso Recomendado             |
| --------- | ----------------- | --------------- | ------------ | ------------- | --------------------------- |
| `vector`  | O(1)              | O(n)            | O(1)\*       | O(n)          | Acesso frequente por índice |
| `list`    | ✗                 | O(1)            | O(1)         | O(1)\*\*      | Muitas inserções/remoções   |
| `deque`   | O(1)              | O(1)            | O(1)         | O(n)          | Operações nas extremidades  |
| `stack`   | ✗                 | ✗               | O(1)         | ✗             | Algoritmos LIFO             |
| `queue`   | ✗                 | ✗               | O(1)         | ✗             | Algoritmos FIFO             |

\*O(1) amortizado  
\*\*Se você já tem o iterador para a posição

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

- Reutilize [`verificaLeitura()`](./base-ex.cpp) e
  [`verificaLoop()`](./base-ex.cpp) para controlar loops.
- Comente sempre o propósito de variáveis e condições.
- Use as estruturas STL quando precisar de performance e confiabilidade.
- Implemente estruturas customizadas apenas para fins educacionais ou requisitos
  específicos.

---
