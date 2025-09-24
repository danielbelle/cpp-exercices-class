#include <iostream>

int main() {
    int v1[3] = { 1, 2, 3 };
    int v2[3] = { 4, 5, 6 };
    int v3[3] = { 7, 8, 9 };

    // Declaração de um array de ponteiros
    int* arrayDePonteiros[3];

    // Cada ponteiro aponta para o primeiro elemento de um array diferente
    arrayDePonteiros[0] = v1;
    arrayDePonteiros[1] = v2;
    arrayDePonteiros[2] = v3;

    // Acessando elementos através do array de ponteiros
    // Para acessar o valor de v2[1] (que é 5)
    // arrayDePonteiros[1] aponta para v2
    // *(arrayDePonteiros[1] + 1) acessa o segundo elemento (índice 1) de v2
    std::cout << "Valor de v2[1]: " << *(arrayDePonteiros[1] + 1) << std::endl; // Saída: 5

    // Outra forma de acessar o primeiro elemento do array apontado pelo segundo ponteiro
    std::cout << "Valor de v2[0]: " << *arrayDePonteiros[1] << std::endl; // Saída: 4

    return 0;
}