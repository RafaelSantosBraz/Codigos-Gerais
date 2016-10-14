#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    string resp;
    double investimento_total = 0.0, rendimento_total = 0.0;
    do{
        int codigo, conta;
        double investimento;
        cout  << "Digite o codigo do cliente: ";
        cin >> codigo;
        cout  << "Digite o tipo da conta: ";
        cin >> conta;
        cout  << "Digite o valor investido: ";
        cin >> investimento;
        investimento_total += investimento;
        double rendimento_mensal;
        switch (conta){
        case 1:
            rendimento_mensal = (1.5 * investimento) / 100.0;
            rendimento_total += rendimento_mensal;
            printf("Rendimento mensal: %f\n", rendimento_mensal);
            break;
        case 2:
            rendimento_mensal = (2.0 * investimento) / 100.0;
            rendimento_total += rendimento_mensal;
            printf("Rendimento mensal: %f\n", rendimento_mensal);
            break;
        case 3:
            rendimento_mensal = (4.0 * investimento) / 100.0;
            rendimento_total += rendimento_mensal;
            printf("Rendimento mensal: %f\n", rendimento_mensal);
        }
        cout << "Deseja informar um novo cliente?\n";
        cin >> resp;
    } while(tolower(resp[0]) == 's');
    printf("Total investido: %f\nTotal de juros pagos: %f\n", investimento_total, rendimento_total);
    return 0;
}
