#include <iostream>

using namespace std;

int main(){
    int ano;
    cout << "Informe um ano: ";
    cin >> ano;
    if ((ano % 4 == 0) && (ano % 400 == 0) && (ano % 100 != 0)){
        cout << "Ano Bissexto";
    } else{
        cout << "Ano comum";
    }
    return 0;
}

