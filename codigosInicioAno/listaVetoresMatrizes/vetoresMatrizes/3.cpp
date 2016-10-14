#include <iostream>

using namespace std;

int main(){
    int n[16];
    for (int cont = 0; cont < 16; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    for (int cont = 0; cont < 8; cont++){
        int aux = n[cont + 8];
        n[cont + 8] = n[cont];
        n[cont] = aux;
    }
    for (int cont = 0; cont < 16; cont++){
        cout << n[cont] << " ";
    }
    cout << endl;
    return 0;
}

