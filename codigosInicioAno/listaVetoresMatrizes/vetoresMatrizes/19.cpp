#include <iostream>
#include <cstdio>
#define TAM 2

using namespace std;

int main(){
    char gabarito[10];
    int resultado[TAM];
    for (int cont = 0; cont < 10; cont++){
        printf("Informe a resposta correta da questao %d: ", cont + 1);
        cin >> gabarito[cont];
    }
    char respostas[TAM][10];
    for (int cont = 0; cont < TAM; cont++){
        int pontuacao = 0;
        for (int col = 0; col < 10; col++){
            printf("Informe a resposta dade pelo aluno %d para a questao %d: ", cont + 1, col + 1);
            cin >> respostas[cont][col];
            if (respostas[cont][col] == gabarito[col]){
                pontuacao++;
            }
        }
        resultado[cont] = pontuacao;
    }
    for (int cont = 0; cont < TAM; cont++){
        printf("Nota do aluno %d: %d\n", cont + 1, resultado[cont]);
    }
    return 0;
}
