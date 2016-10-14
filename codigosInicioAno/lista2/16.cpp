#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int opcao = 0;
    do{
       cout << "Menu de Opcoes:\n";
       cout << "[1] Novo salario\n";
       cout << "[2] Ferias\n";
       cout << "[3] Decimo Terceiro\n";
       cout << "[4] Sair\n\n";
       cout << "Digite a opcao desejada: ";
       cin >> opcao;
       switch (opcao){
       case 1:
           {
               cout << "Informe o salario atual: ";
               double salario;
               cin >> salario;
               if (salario <= 350.00){
                   salario += (salario * 15.0) / 100.0;
               } else if (salario <= 600.00){
                   salario += (salario * 10.0) / 100.0;
               } else{
                   salario += (salario * 5.0) / 100.0;
               }
               printf("Novo salario: %f\n", salario);
               break;
           }
       case 2:
           {
               cout << "Informe o salario atual: ";
               double salario, ferias;
               cin >> salario;
               ferias = salario + (1.0 / 3.0 * salario);
               printf("Valor ferias: %f\n", ferias);
               break;
           }
       case 3:
           {
               double salario, decimo;
               int meses;
               cout << "Informe o salario atual: ";
               cin >> salario;
               cout << "Informe o numero de meses trabalhados: ";
               cin >> meses;
               if (meses <= 12){
                   decimo = (salario * meses) / 12.0;
                   printf("Decimo terceiro: %f\n", decimo);
               } else{
                   cout << "Numero de meses invalido!\n";
               }
           }
           break;
       case 4:
           break;
       default:
           system("cls");
           cout << "*********** Opcao invalida! Informe novamente\n";
       }
    } while(opcao != 4);

    return 0;
}
