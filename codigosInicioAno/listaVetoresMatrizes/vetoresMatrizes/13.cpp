#include <iostream>
#include <cstdio>
#define TAM 50

using namespace std;

int main(){
    int n[TAM];
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    for (int quant = 1; quant <= TAM; quant++){
        for (int cont = 0; cont < TAM - 1; cont++){
           if (n[cont] == 0){
               for (int c = cont; c < TAM - 1; c++){
                    int aux = n[c];
                    n[c] = n[c + 1];
                    n[c + 1] = aux;
               }
           }
        }
    }
    for (int cont = 0; cont < TAM; cont++){
        cout << n[cont] << " ";
    }
    cout << endl;
    return 0;
}
