#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    double soma = 0.0;
    cout << "Digite o ultimo valor da sequencia: ";
    cin >> n;
    for (int cont = 1; cont <= n; cont++){
       soma += 1.0 / cont;
    }
    printf("S = %f\n", soma);
    return 0;
}
