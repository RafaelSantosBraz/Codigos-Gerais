#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double n, resultado = 0.0;
    cout << "Digite um numero positivo: ";
    cin >> n;
    resultado = n;
    if (resultado <= 100.0){
        cout << resultado;
    }
    while (resultado <= 100.0){
        resultado *= 3.0;
        printf(" %f", resultado);
    }
    return 0;
}
