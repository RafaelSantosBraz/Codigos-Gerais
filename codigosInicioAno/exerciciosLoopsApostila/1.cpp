#include <iostream>

using namespace std;

int main(){
    int soma = 0;
    for (int cont = 1; cont <= 10; cont++){
        int n;
        cout << "Digite um numero: ";
        cin >> n;
        soma += n;
    }
    cout << "Soma: " << soma << endl;
    return 0;
}
