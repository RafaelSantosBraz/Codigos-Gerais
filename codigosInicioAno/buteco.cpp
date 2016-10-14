#include <iostream>
#include <cstdlib>

#define PINGA       0.5
#define DOLLY       1.5
#define COCA        8.7
#define COROTE      4.8
#define ESPETO      3
#define TORRESMO    2.5

using namespace std;

int main(){
    double conta = 0;
    int pedido = 0;
    int idade;
    cout << "informe sua idade: ";
    cin >> idade;
    while (pedido != 9){
        system("cls");
        cout << "#####################" << endl;
        cout << "# BUTECO DA ESQUINA #" << endl;
        cout << "#####################" << endl << endl;
        cout << "-------CARDÁPIO------" << endl;
        cout << "[1] *Pinga: \t"<< PINGA << endl;
        cout << "[2] Dolly: \t"<< DOLLY << endl;
        cout << "[3] Coca Cola: \t"<< COCA << endl;
        cout << "[4] *Corotinho:\t"<< COROTE << endl;
        cout << "[5] Espetinho: \t"<< ESPETO << endl;
        cout << "[6] Torresmo: \t"<< TORRESMO << endl;
        cout << "---------------------" << endl;
        cout << "[8] REINICIAR" << endl;
        cout << "[9] SAIR" << endl;
        cout << "---------------------" << endl;
        cout << "* somente para maiores de 18 anos." << endl;
        cout << "Sua escolha: ";
        cin >> pedido;
        bool fail_idade = false;
        switch (pedido)
        {
            case 1:
                if (idade >= 18){
                    conta += PINGA;
                } else{
                    fail_idade = true;
                }
                break;
            case 2:
                conta += DOLLY;
                break;
            case 3:
                conta += COCA;
                break;
            case 4:
                if (idade >= 18){
                    conta += COROTE;
                } else{
                    fail_idade = true;
                }
                break;
            case 5:
                conta += ESPETO;
                break;
            case 6:
                conta += TORRESMO;
                break;
            case 8:
                /*string c = "C:\Users\User\Desktop\Modificar\buteco.exe";
                system(c);*/
                break;
        }
        if (fail_idade == true){
            cout << "Voce nao possui idade suficiente para adquirir esse produto! Contarei para seus pais :)" << endl;
            pedido = 9;
        }
    }
    cout << "Total da conta: "<< conta << endl;
    cout << "Volte sempre!" << endl;
    return 0;
}

