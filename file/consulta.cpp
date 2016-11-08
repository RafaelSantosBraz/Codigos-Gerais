#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "split.hpp"

using namespace std;
int main(){
    cout << "Informe o CEP: ";
    int cep;
    cin >> cep;
    fstream arq;
    arq.open("cidades.csv", ios::in);
    while (arq.good()){
        string linha;
        getline(arq, linha);
        cout << linha << endl;
        vector<string> v = split(linha, ';');
        cout << v.size() << endl;
        int ini = atoi(v[1].c_str());
        int fim = atoi(v[2].c_str());
        if (cep >= ini && cep <= fim){
            cout << "encontrado!!";
        }
    }
    arq.close();
}