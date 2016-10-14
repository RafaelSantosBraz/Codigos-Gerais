#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int quant;
    for (int cont = 0; cont < 10; cont++){
        int idade;
        cout << "Informe a idade: ";
        cin >> idade;
        if (idade >= 18){
           quant++;
        }
    }
    printf("Quantidade de idades maiores ou iguais a 18: %d\n", quant);
    return 0;
}
