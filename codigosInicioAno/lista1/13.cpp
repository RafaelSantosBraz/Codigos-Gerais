#include <iostream>

using namespace std;

int main(){
    string trajeto;
    double etanol, gasolina, rend_gasolina, rend_etanol;
    const double Rend_etanol_cidade = 7.1;
    const double Rend_gasolina_cidade = 10.4;
    const double Rend_etanol_estrada = 8.6;
    const double Rend_gasolina_estrada = 11.8;
    cout << "O trajeto eh na estrada ou na cidade?: ";
    cin >> trajeto;
    cout << "Informe o valor do Etanol: ";
    cin >> etanol;
    cout << "Informe o valor do Gasolina: ";
    cin >> gasolina;
    if (trajeto == "cidade"){
        rend_gasolina = (1.0 / Rend_gasolina_cidade) * gasolina;
        rend_etanol = (1.0 / Rend_etanol_cidade) * etanol;
    } else {
        rend_gasolina = (1.0 / Rend_gasolina_estrada) * gasolina;
        rend_etanol = (1.0 / Rend_etanol_estrada) * etanol;
    }
    if (rend_gasolina < rend_etanol){
        cout << "Gasolina eh mais economica" << endl;
    } else if (rend_etanol < rend_gasolina){
        cout << "Etanol eh mais economico" << endl;
    } else {
        cout << "Ambos sao igualmente economicos" << endl;
    }
    return 0;
}

