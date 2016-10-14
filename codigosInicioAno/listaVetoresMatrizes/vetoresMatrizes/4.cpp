#include <iostream>

using namespace std;

int main(){
    int n[20], x, posi = -1;
    for (int cont = 0; cont < 20; cont++){
        cout << "Informe um valor para o vetor: ";
        cin >> n[cont];
    }
    cout << "Informe a valor a ser pesquisado: ";
    cin >> x;
    for (int cont = 0; cont < 20; cont++){
        if (n[cont] == x){
            posi = cont;
            break;
        }
    }
    if (posi == -1){
        cout << "Valor nao encontrado!\n";
    } else{
        cout << "Valor encontrado na posicao " << posi << endl;
    }
    return 0;
}

