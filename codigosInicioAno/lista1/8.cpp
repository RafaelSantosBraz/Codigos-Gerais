#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int andares;
    double altura, total;
    cout << "Informe o numero de andares: ";
    cin >> andares;
    cout << "Informe a altura de cada andar: ";
    cin >> altura;
    total = altura * andares;
    printf("Altura total do prédio: %f\n", total);
return 0;
}
