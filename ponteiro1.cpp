#include <iostream>

using namespace std;

int main() {
    int recupera(double original[], double novas[], int quant, double* media);
    double orig[] = { 6.7, 9.0, 3.5 };
    double nov[] = { 7.5, 8.8, 5.5 };
    double media = 0.0;

    int troca = recupera(orig, nov, 3, &media);
    cout << "Notas recuperadas: " << troca << endl;
    cout << "Média das notas: " << media << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Nota " << i + 1 << ": " << orig[i] << endl;
    }

    return 0;
}


int recupera(double original[], double novas[], int quant, double* media) {

    int trocados = 0;
    double soma = 0;
    for (int i = 0; i < quant; i++) {
        if (novas[i] < original[i]) {
            trocados++;
            novas[i] = original[i];
        }
        soma += original[i];
    }

    (*media) = soma / quant;
    return trocados;
}
