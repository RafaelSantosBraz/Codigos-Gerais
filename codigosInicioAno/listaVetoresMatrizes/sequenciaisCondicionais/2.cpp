#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int anos, meses, dias, dias_total;
    cout << "Informe a idade em dias: ";
    cin >> dias;
    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias_total = (dias % 365) % 30;
    printf("Idade: %d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias_total);
    return 0;
}

