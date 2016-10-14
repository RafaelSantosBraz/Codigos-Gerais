#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cout << "Informe o numero de termos para a sequencia desejada: ";
    cin >> n;
    int n_anterior = 1, n_penul_anteiror = 1;
    printf("Sequencia: 1 1");
    for (int cont = 2; cont <= n; cont++){
        int aux = n_anterior + n_penul_anteiror;
        printf(" %d", aux);
        n_anterior = n_penul_anteiror;
        n_penul_anteiror = aux;
    }
    cout << endl;
    return 0;
}
