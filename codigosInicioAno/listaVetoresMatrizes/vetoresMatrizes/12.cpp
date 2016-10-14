#include <iostream>
#include <cstdio>
#define TAM 10

using namespace std;

int main(){
    int n[TAM], repe = 0;
    bool rep[TAM];
    for (int cont = 0; cont < TAM; cont++){
        rep[cont] = false;
    }
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    cout << "Numeros repetidos: ";
    for (int cont = 0; cont < TAM; cont++){
        for (int i = 0; i < TAM; i++){
            if (cont != i){
                if (n[cont] == n[i]){
                    if (rep[cont] == false && rep[i] == false){
                        rep[cont] = true;
                        rep[i] = true;
                        cout << n[cont] << " ";
                        repe++;
                    }
                }
            }
        }
    }
    if (repe == 0){
        cout << "nao existem numeros repetidos!";
    }
    cout << endl;
    return 0;
}

