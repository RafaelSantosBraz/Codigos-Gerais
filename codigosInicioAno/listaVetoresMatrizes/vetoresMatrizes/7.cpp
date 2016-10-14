#include <iostream>
#include <cstdio>
#define TAM 20

using namespace std;

int main(){
    int n[TAM], posi = -2, n2[TAM], n3[TAM * 2];
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor 1: ";
        cin >> n[cont];
        posi += 2;
        n3[posi] = n[cont];
    }
    posi = -1;
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor 2: ";
        cin >> n2[cont];
        posi += 2;
        n3[posi] = n2[cont];
    }
    for (int cont = 0; cont < TAM * 2; cont++){
        cout << n3[cont] << " ";
    }
    cout << endl;
    return 0;
}

