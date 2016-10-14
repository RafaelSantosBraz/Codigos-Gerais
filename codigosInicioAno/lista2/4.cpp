#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int cont = 0, quant = 0;
    do{
        int n;
        cout << "Digite um numero inteiro: ";
        cin >> n;
        if (n >= 10 && n <= 110){
            quant++;
        }
        cont++;
    } while (cont < 10);
    printf("Quantdade de numeros entre 10 e 110: %d\n", quant);
    return 0;
}
