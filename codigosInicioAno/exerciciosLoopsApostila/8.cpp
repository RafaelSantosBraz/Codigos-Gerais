#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int quant, soma = 0;
    cin >> quant;
    for (int cont = 0; cont < quant; cont++){
        int n;
        cin >> n;
        soma += n;
    }
    printf("Soma: %d\n", soma);
    return 0;
}
