#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double dolares, cambio, iof, total;
    const double periof = 0.38;
    cout << "Informe o valor em dolares: ";
    cin >> dolares;
    cout << "Informe o valor do cambio: ";
    cin >> cambio;
    total = dolares * cambio;
    iof = (total * periof) / 100;
    total += iof;
    printf("Valor do IOF: %.2f\nValor total a pagar: %.2f\n", iof, total);
return 0;
}
