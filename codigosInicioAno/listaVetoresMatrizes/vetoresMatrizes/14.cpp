#include <iostream>
#include <cstdio>
#define TAM 10

using namespace std;

int main(){
    int n[TAM][TAM], col_maior, lin_maior;
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            cout << "Informe um valor para a matriz: ";
            cin >> n[linha][coluna];
        }
    }
    for (int linha = 0; linha < TAM; linha++){
        for (int coluna = 0; coluna < TAM; coluna++){
            bool continuar = true;
            for (int linha2 = 0; linha2 < TAM; linha2++){
                for (int coluna2 = 0; coluna2 < TAM; coluna2++){
                    if (linha2 != linha || coluna2 != coluna){
                        if (n[linha][coluna] < n[linha2][coluna2]){
                            continuar = false;
                            break;
                        }
                    }
                }
                if (continuar == false){
                    break;
                }
            }
            if (continuar == true){
                col_maior = coluna;
                lin_maior = linha;
            }
        }
    }
    printf("Maior valor: %d. Posicao: %d : %d", n[lin_maior][col_maior], lin_maior, col_maior);
    cout << endl;
    return 0;
}
