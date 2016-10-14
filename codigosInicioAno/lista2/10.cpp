#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    cout << "Informe o valor da mesada de Joaozinho: ";
    double mesada;
    cin >> mesada;
    while (mesada > 0.0){
        cout << "Valor do produto desejado: ";
        double preco;
        cin >> preco;
        if (mesada - preco >= 0.0){
            mesada -= preco;
            printf("Compra aceita (valor restante: %f)\n", mesada);
        } else{
            cout << "Dinheiro insuficiente! Escolha outro produto.\n";
        }
    }
    return 0;
}
