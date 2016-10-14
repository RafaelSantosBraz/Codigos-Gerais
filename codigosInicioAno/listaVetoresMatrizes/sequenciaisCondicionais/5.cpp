#include <iostream>
#include <cstdio>
#define IMP 0.45
#define DIS 0.28

using namespace std;

int main(){
    double preco_inicial, preco_final;
    cout << "Informe o custo de fabrica do carro: ";
    cin >> preco_inicial;
    preco_final = preco_inicial + (preco_inicial * DIS) + (preco_inicial * IMP);
    printf("Custo ao consumidor: %f\n", preco_final);
    return 0;
}
