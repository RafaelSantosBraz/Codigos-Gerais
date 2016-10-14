#include <iostream>
#define TAM 5
using namespace std;

int main(){
    int n[TAM], orde[TAM];
    for (int cont = 0; cont < TAM; cont++){
        cin >> n[cont];
    }
    for (int cont = 0; cont < TAM; cont++){
        int posicao = 1;
        for (int ord = 0; ord < TAM; ord++){
            if (n[cont] > n[ord]){
                posicao++;
            }
        }
        orde[posicao - 1] = n[cont];
    }
    for (int cont = 0; cont < TAM; cont++){
        cout << orde[cont] << " ";
    }
    cout << endl;
    return 0;
}
