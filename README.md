# Lista de Exercícios em C++

Este repositório contém soluções para questões propostas em uma lista de
exercícios de lógica de programação utilizando C++. Cada arquivo `.cpp`
corresponde a um exercício diferente, com o enunciado da questão no início do
arquivo e o código comentado para facilitar o entendimento.

## Questões Resolvidas

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
