#include <iostream>
#include <cstdio>
#define TAM 40

using namespace std;

int main(){
    int n[TAM], quant = 0;
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
        if (n[cont] < 0){
            n[cont] = 0;
        }
    }
    for (int cont = 0; cont < TAM; cont++){
        cout << n[cont] << " ";
    }
    cout << endl;
    return 0;
}

