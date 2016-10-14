#include <iostream>
#include <cstdio>
#define TAM 5

using namespace std;

int main(){
    int n[TAM][TAM], col_maior, lin_maior;
    for (int linha = 0; linha < TAM; linha++){
        int posi = TAM - 1 - linha;
        for (int coluna = 0; coluna < TAM; coluna++){
            if (coluna == posi){
                n[linha][coluna] = 1;
            } else{
                n[linha][coluna] = 0;
            }
        }
    }
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << n[linha][coluna] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
