#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double saldo_medio, credito;
    cout << "Informe o valor do Saldo Medio do cliente: ";
    cin >> saldo_medio;
    if (saldo_medio <= 200){
        credito = 0;
    } else if (saldo_medio <= 400){
        credito = saldo_medio * 0.2;
    } else if (saldo_medio <= 600){
        credito = saldo_medio * 0.3;
    } else{
        credito = saldo_medio * 0.4;
    }
    printf("Saldo medio: %f\nCredito: %f\n", saldo_medio, credito);
    return 0;
}
