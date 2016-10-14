#include <iostream>
#include <cstdio>
#define TAM 40

using namespace std;

int main(){
    int n[TAM];
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    for (int cont = 1; cont < TAM; cont++){
        n[cont] += n[cont - 1];
    }
    for (int cont = 0; cont < TAM; cont++){
        cout << n[cont] << " ";
    }
    cout << endl;
    return 0;
}

