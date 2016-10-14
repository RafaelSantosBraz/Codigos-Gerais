#include <iostream>
#include <cctype>
#include <cstdio>

using namespace std;

int main(){
    string frase;
    int quant = 0;
    getline(cin, frase);
    char iniciais[frase.length()], resp;
    for (int cont = 0; cont < frase.length(); cont++){
        iniciais[cont] = '|';
    }
    for (int cont = 0; cont < frase.length(); cont++){
        frase[cont] = tolower(frase[cont]);
    }
    for (int cont = 0; cont < frase.length(); cont++){
        if (cont != 0 && cont < frase.length() - 1){
            if (frase[cont] == ' '){
                iniciais[cont] = frase[cont + 1];
                quant++;
            }
        } else{
            if (cont == 0 && frase[cont] != ' '){
                iniciais[cont] = frase[cont];
                quant++;
            } else if (cont == 0 && frase[cont] == ' '){
                iniciais[cont] = frase[cont + 1];
                quant++;
            } else if (frase[cont - 1] == ' '){
                iniciais[cont] = frase[cont];
                quant++;
            }
        }
    }
    for (int cont = 1; cont < frase.length(); cont++){
        if (quant > 1){
            if (iniciais[cont] != '|'){
                if (iniciais[0] == iniciais[cont]){
                    resp = 'S';
                } else{
                    resp = 'N';
                    break;
                }
            }
        } else{
           resp = 'S';
           break;
        }
    }
    cout << iniciais << endl;
    cout << resp << endl;
    return 0;
}
