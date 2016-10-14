#include <iostream>
#include <cstdio>
#define TAM 5

using namespace std;

int main(){
    string frase;
    cout << "Informe a frase: ";
    getline(cin, frase);
    for (int cont = 0; cont < frase.length(); cont++){
        if (frase[cont] != ' '){
            cout << frase[cont];
        }
    }
    cout << endl;
    return 0;
}

