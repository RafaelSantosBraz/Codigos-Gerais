#include <iostream>

using namespace std;

int main(){
    string frase, nova_frase = "", frase_final = "";
    cout << "Informe a frase a ser verificada: \n";
    getline(cin, frase);
    int quant = 0;
    for (int cont = 0; cont < frase.length(); cont++){
        if (frase[cont] != '.' && frase[cont] != ',' && frase[cont] != ';' && frase[cont] != ':' && frase[cont] != '!' && frase[cont] != '?'){
            nova_frase += frase[cont];
        }
    }
    for (int cont = 0; cont < nova_frase.length(); cont++){
        if (cont == 0 || cont == nova_frase.length() - 1){
            if (nova_frase[cont] != ' '){
                frase_final += nova_frase[cont];
            }
        } else if (nova_frase[cont] != ' '){
            frase_final += nova_frase[cont];
        } else if (nova_frase[cont - 1] != ' '){
            frase_final += nova_frase[cont];
        }
    }
    int x = 0;
    for (int cont = 0; cont < frase_final.length(); cont++){
        if (frase_final[cont] == ' '){
            x++;
        }
    }
    if (x != 0){
        string frase_pronta[x];
        for (int cont = 0; cont < x; cont++){
            frase_pronta[cont] = "";
        }
        for (int cont2 = 0; cont2 < x; cont2++){
            for (int cont = 0; cont < frase_final.length(); cont++){
                if (cont == 0 || cont == frase_final.length() - 1){
                    if (frase_final[cont] != ' '){
                        frase_pronta[cont2] += frase_final[cont];
                    }
                } else if (nova_frase[cont] != ' '){
                    frase_pronta[cont2] += frase_final[cont];
                } else if (nova_frase[cont - 1] != ' '){
                    frase_pronta[cont2] += frase_final[cont];
                }
            }
            cout << frase_pronta[cont2] << endl;
        }
        frase_final = frase_pronta[x - 1];
    }
    cout << frase_final << endl;
    return 0;
}
