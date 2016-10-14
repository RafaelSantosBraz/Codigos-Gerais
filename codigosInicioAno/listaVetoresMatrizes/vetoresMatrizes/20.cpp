#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main(){
    string frase, nova_frase = "";
    cout << "Informe a frase a ser verificada: " << endl;
    getline(cin, frase);
    for (int cont = 0; cont < frase.length(); cont++){
        if (isalpha(frase[cont]) || isdigit(frase[cont])){
            nova_frase += frase[cont];
        } else if (frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�'){
            nova_frase += 'a';
        } else if (frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�'){
            nova_frase += 'e';
        } else if (frase[cont] == '�' || frase[cont] == '�'){
            nova_frase += 'i';
        } else if (frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�' || frase[cont] == '�'){
            nova_frase += 'o';
        } else if (frase[cont] == '�' || frase[cont] == '�'){
            nova_frase += 'u';
        }
    }
    cout << nova_frase.length() << endl;
    cout << nova_frase << endl;
    int tamanho = nova_frase.length();
    if (tamanho == 1){
        cout << "Eh um palindromo!\n";
    } else{
        bool pa = true;
        for (int cont = 0; cont < tamanho / 2; cont++){
            if (nova_frase[cont] != nova_frase[tamanho - 1 - cont]){
                pa = false;
                break;
            }
        }
        if (pa == true){
            cout << "Eh um palindromo!\n";
        } else{
            cout << "Nao eh um palindromo!\n";
        }
    }
    return 0;
}
