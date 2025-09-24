#include <iostream>
#include <cmath>

using namespace std;

double calcularCircunferencia(double raio);
double calcularArea(double raio);
double calcularVolume(double raio);
double calcularAreaSuperficial(double raio);

int main() {
    double raio;

    cout << "Digite o valor do raio em metros: ";
    cin >> raio;

    cout << "Circunferência: " << calcularCircunferencia(raio) << "m²" << endl;
    cout << "Área: " << calcularArea(raio) << "m²" << endl;
    cout << "Volume Esfera: " << calcularVolume(raio) << "m³" << endl;
    cout << "Área Superficial da Esfera: " << calcularAreaSuperficial(raio) << "m²" << endl;
    return 0;
}

double calcularCircunferencia(double raio) {
    return 2 * M_PI * raio;
}

double calcularArea(double raio) {
    return M_PI * pow(raio, 2);
}

double calcularVolume(double raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

double calcularAreaSuperficial(double raio) {
    return 4 * M_PI * pow(raio, 2);
}