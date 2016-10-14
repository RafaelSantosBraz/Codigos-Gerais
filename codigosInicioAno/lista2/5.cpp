#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int soma_par = 0, soma_impar = 0;
    for (int cont = 1; cont <= 10; cont++){
        int n;
        cout << "Digite um numero inteiro: ";
        cin >> n;
        if (n % 2 == 0){
            soma_par += n;
        } else{
            soma_impar += n;
        }
    }
    printf("Soma dos pares: %d\nSoma dos impares: %d", soma_par, soma_impar);
    return 0;
}
