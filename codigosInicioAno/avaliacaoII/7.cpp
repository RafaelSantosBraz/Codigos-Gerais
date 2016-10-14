#include <iostream>;

using namespace std;

int main(){
    double peso = 0.0, pesos[100];
    int caixas = 0;
    bool rep;
    for (int cont = 0; cont < 100; cont++){
        pesos[cont] = -1.0;
    }
    do{
        rep = true;
        double aux;
        cin >> aux;
        if (aux != -1.0 && caixas + 1 <= 100 && peso + aux <= 1000.0){
            pesos[caixas] = aux;
            caixas++;
            peso += aux;
        } else{
            rep = false;
        }
    } while (rep);
    cout << "Caixas: " << caixas << endl;
    cout << "Peso: " << peso << endl;
    cout << "Peso sobrando: " << 1000.0 - peso << endl;
    int c = 0;
    while (pesos[c] != -1){
        cout << c + 1 << " " <<  pesos[c] << endl;
        c++;
    }
    return 0;
}
