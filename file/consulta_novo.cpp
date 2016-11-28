#include <iostream>
#include <fstream>
#include <vector>
#include "split.hpp"

using namespace std;
int main(){
    int op;
    double result = 0.0;
    fstream cidades;
    cidades.open("pr.csv", ios::in);
    cout << "Ops:\n2 - Total da população em 2000\n3 - Total de homens\n4 - Total de mulheres\n5 - Total da população urbana\n6 - Total da população rural\n7 - Total da população 2010\n";
    cin >> op;
    while (cidades.good()){
        string linha;
        getline(cidades, linha);
        vector<string> dados = split(linha, ';');
        result += atof(dados[op].c_str());
    }
    cout << "Total: " << result;
    cidades.close();
    return 0;
}