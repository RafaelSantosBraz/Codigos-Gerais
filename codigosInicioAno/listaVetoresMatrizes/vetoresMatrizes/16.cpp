#include <iostream>
#define TAM 2

using namespace std;

int main(){
    int a [TAM][TAM], b[TAM][TAM], c[TAM][TAM];
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << "Informe a valor para a matriz 1: ";
            cin >> a[linha][coluna];
        }
    }
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << "Informe a valor para a matriz 2: ";
            cin >> b[linha][coluna];
        }
    }
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            if (a[linha][coluna] >= b[linha][coluna]){
                c[linha][coluna] = a[linha][coluna];
            } else{
                c[linha][coluna] = b[linha][coluna];
            }
        }
    }
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << c[linha][coluna];
            if (coluna != TAM - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
