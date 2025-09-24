#include <iostream>

using namespace std;

int main() {

    void swapInt(int* a, int* b);
    void inverte(int arr[], int quant);
    void inverteSwap(int arr[], int quant);
    int vetor[] = { 10, 2, 3, 4, 90, 23, 0 };
    int quant = sizeof(vetor) / sizeof(vetor[0]);



    inverteSwap(vetor, quant);
    cout << "Vetor invertido: ";
    for (int i = 0; i < quant; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}

void swapInt(int* var1, int* var2) {
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

void inverteSwap(int arr[], int quant) {
    for (int i = 0; i < quant / 2; i++) {
        swapInt(&arr[i], &arr[quant - i - 1]);
    }
}

void inverte(int arr[], int quant) {
    for (int i = 0; i < quant / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[quant - i - 1];
        arr[quant - i - 1] = temp;
    }
}
