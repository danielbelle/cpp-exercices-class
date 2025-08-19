/*
	Lista 1 - Exercicio 2

	A EHEV (Erechim Hybrid and Electrical Vehicles) está lançando seus veículos no mercado. É possível escolher entre três modelos base: A, B e C. O modelo A tem 3 opções de bateria: X, Y e Z. Os modelos B e C tem apenas 2 opções: Y e Z. O modelo A pode ser configurado com rodas de aro tamanho 14 e 15. O modelo B, apenas tamanho 16. O modelo C, podem ser 15 ou 16. Escreva um programa que leia as 3 características, modelo (char), bateria (char) e roda (int). Dadas as restrições descritas, informe se o carro a ser fabricado é VALIDO ou INVALIDO.
*/
#include <iostream>
#include <limits> 
using namespace std;

int main() {
	bool condicaoLoop = false;
	char modelo, bateria;
	int roda;
	bool valido = false;

	do
	{
		cout << "Escolha entre o modelo base A, B ou C: " << endl;
		cin >> modelo;
		modelo = toupper(modelo);
		cout << "Escolha entre o modelo de bateria X, Y ou Z: " << endl;
		cin >> bateria;
		bateria = toupper(bateria);
		cout << "Escolha entre o tamanho da roda 14, 15 ou 16: " << endl;
		cin >> roda;

		if (modelo == 'A') {
			if ((bateria == 'X' || bateria == 'Y' || bateria == 'Z') && (roda == 14 || roda == 15)) {
				valido = true;
			}
		}
		else if (modelo == 'B') {
			if ((bateria == 'Y' || bateria == 'Z') && roda == 16) {
				valido = true;
			}
		}
		else if (modelo == 'C') {
			if ((bateria == 'Y' || bateria == 'Z') && (roda == 15 || roda == 16)) {
				valido = true;
			}
		}
		else {
			valido = false;
		}

		if (valido) {
			cout << "VALIDO" << endl;
		}
		else {
			cout << "INVALIDO" << endl;
		}

		cout << roda << bateria << modelo << endl;

		//caso de falha na leitura
		if (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "Digite 0 para sair ou 1 para continuar: " << endl;
		cin >> condicaoLoop;
		if (condicaoLoop != 0) {
			condicaoLoop = true;
		}
		else {
			condicaoLoop = false;
		}

	} while (condicaoLoop);

	return 0;
}