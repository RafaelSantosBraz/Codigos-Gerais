#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool verificar_data(int *d, int *m, int *a){
    if (*a > 0){
        if (*m > 0){
            int limite;
            switch (*m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                limite = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                limite = 30;
                break;
            case 2:
                limite = 29;
                break;
            default:
                return false;
                break;
            }
            if ((*d > 0) && (*d <= limite)){
                return true;
            } else{
                return false;
            }
        } else{
            return false;
        }
    } else{
        return false;
    }
}

void inserir_data(int *d, int *m, int *a){
    string data, dia = "", mes = "", ano = "";
    while (true){
        cout << "Informe a data: ";
        getline(cin, data);
        int barras = 0;
        for (int c = 0; c < data.length(); c++){
            if (data[c] == '/'){
                barras++;
            }
        }
        if (barras == 2){
            break;
        } else{
            cout << "Formato incorreto!\n";
        }
    }
    int barra = 0;
    for (int c = 0; c < data.length(); c++){
        if (data[c] != '/'){
            if (barra == 0){
                dia += data[c];
            } else if (barra == 1){
                mes += data[c];
            } else{
                ano += data[c];
            }
        } else{
            barra++;
        }
    }
    *d = atoi(dia.c_str());
    *m = atoi(mes.c_str());
    *a = atoi(ano.c_str());
}

int main(){
    int d, m, a;
    inserir_data(&d, &m, &a);
    if (verificar_data(&d, &m, &a)){
         cout << "validou" << endl;
    }
    cout << d << " " << m << " " << a << endl;
    return 0;
}
