#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int soma = 0, n = -1, quant = 0;
    while (n != 0){
        cout << "Digite um numero inteiro positivo: ";
        cin >> n;
        if (n > 0){
            soma += n;
            quant++;
        }
    }
    if (quant > 0){
        printf("Soma: %f\n", (soma / (float)quant));
    } else{
        printf("Impossivel aferir a media de 0 numeros!\n");
    }
    return 0;
}
