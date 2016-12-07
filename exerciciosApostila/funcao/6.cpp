#include <iostream>
#include <cmath>

using namespace std;

double calcularJuros(double, double, int);

int main(){
    double p, i;
    int n;
    cout << "Valor Aplicação: ";
    cin >> p;
    cout << "Taxa: ";
    cin >> i;
    cout << "Meses: ";
    cin >> n;
    cout << "Juros: " << calcularJuros(p, i, n) << endl;
    return 0;
}

double calcularJuros(double p, double i, int n){
    double m = p * pow((1 + i / 100.0), n);
    return m - p;
}