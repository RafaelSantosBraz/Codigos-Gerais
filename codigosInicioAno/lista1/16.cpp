#include <iostream>

using namespace std;

int main(){
    int dia, mes, ano, limite_dias;
    bool bissexto = false;
    cout << "Informe o dia: ";
    cin >> dia;
    cout << "Informe o mes: ";
    cin >> mes;
    cout << "Informe o ano: ";
    cin >> ano;
    if ((ano > 0) && (mes > 0) && (dia > 0)){
        if ((ano % 4 == 0) && (ano % 400 == 0) && (ano % 100 != 0)){
            bissexto = true;
        }
        if (mes <= 12){
            if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)){
                limite_dias = 31;
            } else if (mes == 2){
                limite_dias = 28;
                if (bissexto == true){
                    limite_dias += 1;
                }
            } else if (mes <= 12){
                limite_dias = 30;
            }
            if (dia <= 31){
                if (dia <= limite_dias){
                    cout << "Data valida"<< endl;
                } else{
                    cout << "Data invalida, pois nao existe mais de " << limite_dias << " dias no mes informado" << endl;
                }
            } else{
                cout << "Data invalida, pois nao existe mais de 31 dias em um mes" << endl;
            }
        } else{
            cout << "Data invalida, pois nao existe mes " << mes << endl;
        }
    } else{
        cout << "Data invalida, pois nao existem datas negativas" << endl;
    }
    return 0;
}

