/*
	Lista 1 - Exercicio 1

	Um analista está avaliando um processo. São realizadas duas avaliações, com valores entre 0 e 10, inclusive. Se as duas avaliações forem maiores ou iguais a 9,0, o valor final será a maior das duas. Se ambas forem superiores a 5,0, o resultado será a média das duas. Caso alguma seja inferior ou igual a 5.0, prevalecerá a menor das duas avaliações.
*/

#include <iostream>
#include <limits> 
using namespace std;

int main() {
	float avaliacaoUm, avaliacaoDois, media;
	bool condicaoLoop = false;
	do
	{
		do {
			cout << "Digite a primeira avaliacao: " << endl;
			cin >> avaliacaoUm;
		} while (avaliacaoUm < 0.0 || avaliacaoUm > 10.0);

		do {
			cout << "Digite a segunda avaliacao: " << endl;
			cin >> avaliacaoDois;
		} while (avaliacaoDois < 0.0 || avaliacaoDois > 10.0);

		if (avaliacaoUm >= 9.0 && avaliacaoDois >= 9.0)
		{
			if (avaliacaoUm >= avaliacaoDois)
				cout << "Nota da avaliação 1 considerada: " << avaliacaoUm << endl;
			else
				cout << "Nota da avaliação 2 considerada: " << avaliacaoDois << endl;
		}
		else if (avaliacaoUm <= 5.0 || avaliacaoDois <= 5.0) {
			if (avaliacaoUm > avaliacaoDois) {
				cout << "Nota da avaliação 2 considerada: " << avaliacaoDois << endl;
			}
			else {
				cout << "Nota da avaliação 1 considerada: " << avaliacaoUm << endl;
			}
		}
		else {
			media = (avaliacaoUm + avaliacaoDois) / 2.0;
			cout << "Nota media considerada: " << media << endl;
		}

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