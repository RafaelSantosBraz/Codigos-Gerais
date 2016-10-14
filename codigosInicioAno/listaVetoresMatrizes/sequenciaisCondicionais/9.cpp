#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int id;
    double n1, n2, n3, me;
    cout << "Digite o numero de identificacao do aluno: ";
    cin >> id;
    cout << "Digite a nota da primeira verificacao: ";
    cin >> n1;
    cout << "Digite a nota da segunda verificacao: ";
    cin >> n2;
    cout << "Digite a nota da terceira verificacao: ";
    cin >> n3;
    cout << "Digite a nota da media dos exercicios: ";
    cin >> me;
    double ma = (n1 + n2 * 2.0 + n3 * 3.0 + me) / 7.0;
    if (ma < 4.0){
        printf("Conceito: E\n");
    } else if(ma < 6.0){
        printf("Conceito: D\n");
    } else if(ma < 7.5){
        printf("Conceito: C\n");
    } else if(ma < 9.0){
        printf("Conceito: B\n");
    } else{
        printf("Conceito: A\n");
    }
    return 0;
}
