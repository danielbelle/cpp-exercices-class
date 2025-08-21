/*
	Lista 1 - Exercicio 3

	No município de Miracema do Norte, Arlindo Orlando está responsável por instalar novos radares de velocidade e necessita de auxílio para configurá-los. Dado um limite de velocidade, a ser lido externamente, deve ser considerado um erro geral de qualquer equipamento de 7 km/h (subtrair da velocidade medida do veículo). Em seguida, analisar se a velocidade do veículo for até 10% do limite, está dentro da tolerância e não é gerada autuação; se for entre 10 e 20%, a infração é MÉDIA; até 50% a infração é GRAVE; e acima disso ela é GRAVÍSSIMA.
*/
#include <iostream>
#include <limits> 
using namespace std;

int main() {
	bool condicaoLoop = false;
	string tipoInfracao;
	float limiteVelocidade, velocidadeMedia;
	float erroMedida = 7.0;
	float naoInfracao = 1.1;
	float mediaInfracao = 1.2;
	float graveInfracao = 1.5;

	do
	{
		cout << "Velocidade Média do veículo em km/h: ";
		while (!(cin >> velocidadeMedia) || velocidadeMedia < 0.0f) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Entrada inválida. Velocidade Média do veículo em km/h >=0: ";
		}

		cout << "Limite de velocidade em km/h: ";
		while (!(cin >> limiteVelocidade) || limiteVelocidade < 0.0f) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Entrada inválida. Digite um limite >= 0: ";
		}


		velocidadeMedia -= erroMedida;

		if (velocidadeMedia < 0)
		{
			velocidadeMedia = 0;
		}

		if (velocidadeMedia <= limiteVelocidade * naoInfracao) {
			tipoInfracao = "Dentro da tolerância";
		}
		else if (velocidadeMedia <= limiteVelocidade * mediaInfracao) {
			tipoInfracao = "Infração MÉDIA";
		}
		else if (velocidadeMedia <= limiteVelocidade * graveInfracao) {
			tipoInfracao = "Infração GRAVE";
		}
		else {
			tipoInfracao = "Infração GRAVÍSSIMA";
		}

		cout << "Tipo de infração: " << tipoInfracao << endl;

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