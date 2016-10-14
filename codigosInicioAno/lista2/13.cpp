#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int opcao;
    do{
        cout << "*----------------------*\n";
        cout << "|Menu de Opcoes:       |\n";
        cout << "|[1] Media aritmetica  |\n";
        cout << "|[2] Media ponderada   |\n";
        cout << "|[3] Sair              |\n";
        cout << "*----------------------*\n\n";
        cout << "Digite a opcao desejada: ";
        cin >> opcao;
        switch (opcao){
        case 1:
            {
                int quant = 0;
                double nota = 0.0, media = 0.0;
                while(nota >= 0.0){
                    cout << "digite a nota: ";
                    cin >> nota;
                    if (nota >= 0.0){
                        media += nota;
                        quant++;
                    }
                }
                if (quant > 0){
                    printf("Media aritmetica: %f\n", media / quant);
                }
                break;
            }
        case 2:
            {
                double peso_total = 0.0;
                double nota = 0.0, media = 0.0;
                while(nota >= 0.0){
                    cout << "Digite a nota e seu peso (separe por espaco): ";
                    cin >> nota;
                    double peso;
                    cin >> peso;
                    if (nota >= 0.0){
                        media += nota * peso;
                        peso_total += peso;
                    }
                }
                if (peso_total > 0){
                    printf("Media ponderada: %f\n", media / peso_total);
                }
                break;
            }
        case 3:
            break;
        default:
            system("cls");
            cout << "Opcao invalida! escolha novamente.\n\n";
        }
    } while(opcao != 3);
    return 0;
}
