#include <iostream>
#include <cstdio>
#define TAM 6

using namespace std;

int main(){
    int n[TAM][TAM];
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << "Informe um valor para a matriz: ";
            cin >> n[linha][coluna];
        }
    }
    int quant = 0;
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            if (n[linha][coluna] > 10){
                quant++;
            }
        }
    }
    cout << "Quantidade de numeros maiores que 10: " << quant << endl;
    return 0;
}
