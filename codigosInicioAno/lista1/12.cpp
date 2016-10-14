#include <iostream>

using namespace std;

int main(){
    int idade;
    cout << "Informe sua idade: ";
    cin >> idade;
    if ((idade >= 10) && (idade <= 14)){
        cout << "INFANTIL" << endl;
    } else if ((idade >= 15) && (idade <= 17)){
        cout << "JUVENIL" << endl;
    } else if ((idade >= 18) && (idade <= 25)){
        cout << "ADULTO" << endl;
    } else {
        cout << "Sem categoria definida!" << endl;
    }
    return 0;
}
