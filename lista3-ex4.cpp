/**
 * Funções em C++
Faça uma leitura aprofundada do texto sobre Funcões Matemáticas. Em seguida, explore mais sobre as funções matemáticas de cmath, pesquisando sobre aplicações e usos dessas funções. Por fim, elabore um programa em C++ que demonstre o uso de ao menos 10 funções de diferentes categorias, e ao menos 3 constantes matemáticas dessa biblioteca.
Use sem moderação os comentários no seu código para demonstrar que você compreendeu o uso dessas funções e constantes.
 */
#include <iostream>
#include <limits> 
#include <cmath>

using namespace std;
void verificaLeitura();
bool verificaLoop(bool condicaoLoop);

int truncarNumero(double numero);
double restoDivisao(double numerador, double denominador);
double logaritmoBaseVariavel(double x, double base);
double converteRadianos(double graus);
double converteGraus(double radianos);
double arcoSeno(double x);
double seno(double graus);
double exponencial(double x);
double dilatacaoTemporal(double tempo, double velocidade);
double tempoQuedaLivre(double altura);
double diferenca(double a, double b);
string decoreConstantesCMath();

int main() {
    bool condicaoLoop = false;
    do {

        int escolha = 0;
        cout << "Escolha a função por numero:\n"
            << "1  - truncarNumero\n"
            << "2  - logaritmoBaseVariavel\n"
            << "3  - converteRadianos\n"
            << "4  - converteGraus\n"
            << "5  - arcoSeno\n"
            << "6  - seno\n"
            << "7  - exponencial\n"
            << "8  - dilatacaoTemporal\n"
            << "9 - tempoQuedaLivre\n"
            << "10 - diferenca (fdim)\n"
            << "11 - decoreConstantesCMath (retorna uma string aleatoria)\n"
            << "Digite o numero da opcao: ";
        cin >> escolha;

        switch (escolha) {
        case 1: {
            cout << "Remove a parte fracionária de um número (truncar)." << endl;
            double numero;
            cout << "Digite um numero (double) para truncar: ";
            cin >> numero;
            cout << "Resultado: " << truncarNumero(numero) << endl;
            break;
        }
        case 2: {
            cout << "Calcula o logaritmo de x na base informada." << endl;
            double x, base;
            cout << "Digite x e a base: ";
            cin >> x >> base;
            cout << "Logaritmo de " << x << " na base " << base << " = " << logaritmoBaseVariavel(x, base) << endl;
            break;
        }
        case 3: {
            cout << "Converte um ângulo em graus para radianos." << endl;
            double graus;
            cout << "Digite graus: ";
            cin >> graus;
            cout << graus << " graus = " << converteRadianos(graus) << " radianos" << endl;
            break;
        }
        case 4: {
            cout << "Converte um ângulo em radianos para graus." << endl;
            double rad;
            cout << "Digite radianos: ";
            cin >> rad;
            cout << rad << " radianos = " << converteGraus(rad) << " graus" << endl;
            break;
        }
        case 5: {
            cout << "Calcula o arco seno de x (resultado em graus). (x deve estar em [-1,1])" << endl;
            double x;
            cout << "Digite x (entre -1 e 1) para arco seno: ";
            cin >> x;
            cout << "Arco seno (graus): " << arcoSeno(x) << endl;
            break;
        }
        case 6: {
            cout << "Calcula o seno de um ângulo dado em graus." << endl;
            double g;
            cout << "Digite graus para calcular seno: ";
            cin >> g;
            cout << "sin(" << g << "°) = " << seno(g) << endl;
            break;
        }
        case 7: {
            cout << "Calcula a função exponencial e^x." << endl;
            double x;
            cout << "Digite x para exp(x): ";
            cin >> x;
            cout << "exp(" << x << ") = " << exponencial(x) << endl;
            break;
        }
        case 8: {
            cout << "Calcula uma versão simplificada da dilatação temporal (relatividade)." << endl;
            double tempo, vel;
            cout << "Digite tempo em anos e velocidade em porcentagem da velocidade da luz (0-100): ";
            cin >> tempo >> vel;
            cout << "Dilatação temporal sofrida para um observador em repouso foi " << dilatacaoTemporal(tempo, vel) << " Anos. Enquanto para quem esteve na nave foi: " << tempo << " Anos." << endl;
            break;
        }
        case 9: {
            cout << "Estima o tempo de queda livre a partir da altura (aprox.)." << endl;
            double altura;
            cout << "Digite altura (m): ";
            cin >> altura;
            cout << "Tempo de queda livre (aprox) = " << tempoQuedaLivre(altura) << " s" << endl;
            break;
        }
        case 10: {
            cout << "Retorna fdim(a,b) — diferença não-negativa entre a e b." << endl;
            double a, b;
            cout << "Digite dois valores (a b) para fdim(a,b): ";
            cin >> a >> b;
            cout << "Diferenca (fdim) = " << diferenca(a, b) << endl;
            break;
        }
        case 11: {
            cout << "Mostra uma constante matemática (nome e valor) escolhida aleatoriamente." << endl;
            cout << decoreConstantesCMath() << endl;
            break;
        }
        default:
            cout << "Opcao invalida." << endl;
            break;
        }

        verificaLeitura();
        condicaoLoop = verificaLoop(condicaoLoop);
    } while (condicaoLoop);

    return 0;
}

int truncarNumero(double numero) {
    return trunc(numero);
}


double logaritmoBaseVariavel(double x, double base) {
    return log10(x) / log10(base);
}

double converteRadianos(double graus) {
    return graus * (M_PI / 180.0);
}

double converteGraus(double radianos) {
    return radianos * (180.0 / M_PI);
}

double arcoSeno(double x) {
    return converteGraus(asin(x));
}

double seno(double graus) {
    double radianos = converteRadianos(graus);
    return sin(radianos);
}

double exponencial(double x) {
    return exp(x);
}

double dilatacaoTemporal(double tempo, double velocidade) {
    return tempo * 1.0 / (sqrt(1 - (pow(velocidade / 100.0, 2))));
}

double tempoQuedaLivre(double altura) {
    return M_SQRT2 * sqrt((altura) / 9.81);
}

double diferenca(double a, double b) {
    return fdim(a, b);
}

string decoreConstantesCMath() {
    const std::pair<std::string, double> constantes[] = {
        {"M_E: A base dos logaritmos naturais, aproximadamente ", M_E},
        {"M_LOG2E: O logaritmo de e na base 2, aproximadamente ", M_LOG2E},
        {"M_LOG10E: O logaritmo de e na base 10, aproximadamente ", M_LOG10E},
        {"M_LN2: O logaritmo natural de 2, aproximadamente ", M_LN2},
        {"M_LN10: O logaritmo natural de 10, aproximadamente ", M_LN10},
        {"M_PI: O valor de π (pi), aproximadamente ", M_PI},
        {"M_PI_2: O valor de π/2, aproximadamente ", M_PI_2},
        {"M_PI_4: O valor de π/4, aproximadamente ", M_PI_4},
        {"M_1_PI: O valor de 1/π, aproximadamente ", M_1_PI},
        {"M_2_PI: O valor de 2/π, aproximadamente ", M_2_PI},
        {"M_2_SQRTPI: O valor de 2/√π, aproximadamente ", M_2_SQRTPI},
        {"M_SQRT2: O valor de √2, aproximadamente ", M_SQRT2},
        {"M_SQRT1_2: O valor de 1/√2, aproximadamente ", M_SQRT1_2}
    };
    // Retorna uma constante aleatória
    int idx = std::rand() % (sizeof(constantes) / sizeof(constantes[0]));
    return constantes[idx].first + std::to_string(constantes[idx].second);
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