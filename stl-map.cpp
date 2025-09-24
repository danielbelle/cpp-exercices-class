#include <map>
#include <iostream>

using namespace std;

int main() {

    map<string, int> pessoas;

    pessoas["Daniel"] = 31;
    pessoas.insert({ "Victor", 19 });
    cout << "Tamanho do map: " << pessoas.size() << endl;

    cout << "Idade do Daniel: " << pessoas["Daniel"] << endl;
    cout << "Idade do Victor: " << pessoas["Victor"] << endl;

    /* com o auto ele infere o tipo e pega os dados e separa em first - key e second - value */
    for (auto pessoa : pessoas) {
        cout << pessoa.first << " tem " << pessoa.second << " anos." << endl;
    }



    return 0;
}