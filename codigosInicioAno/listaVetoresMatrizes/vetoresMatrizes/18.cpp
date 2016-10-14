#include <iostream>
#include <cstdio>
#define TAM 20

using namespace std;

int main(){
    int n[TAM][TAM], col = -1, lin;
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << "Informe um valor para a matriz: ";
            cin >> n[linha][coluna];
        }
    }
    cout << "Informe o numero a ser pesquisado: ";
    int x;
    cin >> x;
    bool encontrado = false;
    for (int linha = 0; linha < TAM; linha++){
        if (encontrado == true){
             break;
        }
        for (int coluna = 0; coluna < TAM; coluna++){
            if (encontrado == true){
                 break;
            }
            if (n[linha][coluna] == x){
                encontrado = true;
                col = coluna;
                lin = linha;
            }
        }
    }
    if (col != -1){
        printf("Localizacao: %d : %d\n", lin, col);
    } else{
        cout << "Nao encontrado!\n";
    }
    return 0;
}
