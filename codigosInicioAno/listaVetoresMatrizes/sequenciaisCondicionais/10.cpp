#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double indice;
    cout << "Informe o indice de poluicao: ";
    cin >> indice;
    if (indice >= 0.05 && indice <= 0.25){
        cout << "Funcionamento normal.\n";
    } else if (indice >= 0.3 && indice < 0.4){
        cout << "Industrias de primeiro grupo devem suspender as atividades!\n";
    } else if (indice >= 0.4 && indice < 0.5){
        cout << "Industrias de primeiro e segundo grupo devem suspender as atividades!\n";
    } else if (indice >= 0.5 && indice < 0.5){
        cout << "Industrias de todos os grupos devem suspender as atividades!\n";
    }
    return 0;
}
