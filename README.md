# Lista de Exercícios em C++

Este repositório contém soluções para questões propostas em listas de exercícios
de lógica de programação utilizando C++. Cada arquivo `.cpp` corresponde a um
exercício diferente, com o enunciado da questão no início do arquivo e o código
comentado para facilitar o entendimento.

## Modelo Base

Todos os exemplos seguem um padrão de estrutura para facilitar a leitura e
reutilização.  
Veja o modelo utilizado em [`base-ex.cpp`](./base-ex.cpp):

```cpp
/**
 *

 */
#include <iostream>
#include <limits>

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);

int main() {
    bool condicaoLoop = false;
    do {

      // SEU CODIGO AQUI

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
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
```

## Questões Resolvidas

### Lista 1

- **Questão 1**  
  _Um analista está avaliando um processo. São realizadas duas avaliações, com
  valores entre 0 e 10, inclusive. Se as duas avaliações forem maiores ou iguais
  a 9,0, o valor final será a maior das duas. Se ambas forem superiores a 5,0, o
  resultado será a média das duas. Caso alguma seja inferior ou igual a 5.0,
  prevalecerá a menor das duas avaliações._  
  [Veja a solução em `lista1-ex1.cpp`](./lista1-ex1.cpp)

- **Questão 2**  
  _A EHEV (Erechim Hybrid and Electrical Vehicles) está lançando seus veículos
  no mercado. É possível escolher entre três modelos base: A, B e C. O modelo A
  tem 3 opções de bateria: X, Y e Z. Os modelos B e C tem apenas 2 opções: Y e
  Z. O modelo A pode ser configurado com rodas de aro tamanho 14 e 15. O modelo
  B, apenas tamanho 16. O modelo C, podem ser 15 ou 16. Escreva um programa que
  leia as 3 características, modelo (char), bateria (char) e roda (int). Dadas
  as restrições descritas, informe se o carro a ser fabricado é VALIDO ou
  INVALIDO._  
  [Veja a solução em `lista1-ex2.cpp`](./lista1-ex2.cpp)

- **Questão 3**  
  _No município de Miracema do Norte, Arlindo Orlando está responsável por
  instalar novos radares de velocidade e necessita de auxílio para
  configurá-los. Dado um limite de velocidade, a ser lido externamente, deve ser
  considerado um erro geral de qualquer equipamento de 7 km/h (subtrair da
  velocidade medida do veículo). Em seguida, analisar se a velocidade do veículo
  for até 10% do limite, está dentro da tolerância e não é gerada autuação; se
  for entre 10 e 20%, a infração é MÉDIA; até 50% a infração é GRAVE; e acima
  disso ela é GRAVÍSSIMA._  
  [Veja a solução em `lista1-ex3.cpp`](./lista1-ex3.cpp)

### Lista 2

- **Questão 1**  
  _Peça ao usuário um número inteiro n e exiba os primeiros n termos da
  sequência de Fibonacci usando while._  
  [Veja a solução em `lista2-ex1.cpp`](./lista2-ex1.cpp)

- **Questão 2**  
  _Leia vários números inteiros do usuário e calcule a soma deles. O programa
  deve parar quando o usuário digitar 0._  
  [Veja a solução em `lista2-ex2.cpp`](./lista2-ex2.cpp)

- **Questão 3**  
  _Leia uma nota de um aluno (entre 0 e 10). Se o valor digitado for inválido,
  peça novamente até que o usuário digite um valor válido._  
  [Veja a solução em `lista2-ex3.cpp`](./lista2-ex3.cpp)

### Lista 3

- **Questão 1**  
  _Escreva uma função que receba como parâmetro um número inteiro, no intervalo
  de 1 a 20, e retorne uma String correspondente ao número por extenso. Caso o
  número seja menor que 1 ou maior que 20, o método deve retornar o texto
  “inválido”._  
  [Veja a solução em `lista3-ex1.cpp`](./lista3-ex1.cpp)

- **Questão 2**  
  _Criar uma função para calcular o n-ésimo número da série de Fibonacci. A
  série inicia com os valores 1 e 1, e os números subsequentes são a soma dos
  dois anteriores._  
  [Veja a solução em `lista3-ex2.cpp`](./lista3-ex2.cpp)

- **Questão 3**  
  _Escreva uma função recursiva que calcule a potência XN. Nesse exemplo, X é um
  valor real e N é um valor inteiro. Ambos são passados como parâmetros de
  entrada da função._  
  [Veja a solução em `lista3-ex3.cpp`](./lista3-ex3.cpp)

- **Questão 4**  
  _Faça uma leitura aprofundada do texto sobre Funções Matemáticas. Em seguida,
  explore mais sobre as funções matemáticas de cmath, pesquisando sobre
  aplicações e usos dessas funções. Por fim, elabore um programa em C++ que
  demonstre o uso de ao menos 10 funções de diferentes categorias, e ao menos 3
  constantes matemáticas dessa biblioteca._  
  [Veja a solução em `lista3-ex4.cpp`](./lista3-ex4.cpp)

### Lista 4

- **Questão 1**  
  _Escreva um programa que permita ao usuário inserir 10 números inteiros em um
  array. O programa deve conter uma função que rotacione os elementos do array
  para a direita uma vez (o primeiro vai para o segundo, o segundo vai para o
  terceiro, até que o último elemento vai para o primeiro índice). Ao final, a
  função principal (main), deve exibir o array resultante._  
  [Veja a solução em `lista4-ex1.cpp`](./lista4-ex1.cpp)

- **Questão 2**  
  _Implemente uma função que rotacione os elementos do array. A função deve
  receber, além do array, mais dois parâmetros:  
  forward (bool): se true, a rotação ocorre dos menores índices para os maiores,
  se false, o sentido inverte  
  steps (int): indica quantos índices a rotação deve avançar, se por acaso o
  usuário informar um número não positivo, a rotação ocorre de 1 em 1.  
  Escreva também uma função principal (main) para testar o seu código._  
  [Veja a solução em `lista4-ex2.cpp`](./lista4-ex2.cpp)

## Como clonar e executar os arquivos

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/danielbelle/cpp-exercices-class.git
   ```
2. **Acesse a pasta do projeto:**
   ```bash
   cd cpp-exercices-class
   ```
3. **Abra no VS Code:**
   ```bash
   code .
   ```
4. **Compile e execute os arquivos desejados:**
   - No VS Code, abra o arquivo `.cpp` que deseja testar.
   - Pressione `Ctrl+Shift+B` para compilar (ou utilize a tarefa de build
     configurada).
   - Execute o arquivo gerado (`.exe`) pelo terminal ou pelo próprio VS Code.

## Observação para usuários de C++ no VS Code

Para configurar o ambiente C++ no VS Code, recomendo assistir ao vídeo
tutorial:  
[Como configurar C++ no VS Code (YouTube)](https://www.youtube.com/watch?v=DMWD7wfhgNY)

O vídeo ensina como instalar as extensões necessárias, configurar o compilador e
rodar seus programas C++ de forma prática.
