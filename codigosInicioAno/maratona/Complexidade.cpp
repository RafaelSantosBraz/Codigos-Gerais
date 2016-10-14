#include <iostream>
#include <cctype>
#include <cstdio>

using namespace std;

int main(){
    int valor = 0;
    string senha, complx;
    getline(cin, senha);
    for (int cont = 0; cont < senha.length(); cont++){
        if (isdigit(senha[cont])){
            valor++;
        } else if (islower(senha[cont])){
            valor += 2;
        } else if (isupper(senha[cont])){
            valor += 3;
        } else{
            valor += 5;
        }
    }
    if (valor > 0 && valor <= 10){
        complx = "FRACA";
    } else if (valor > 0 && valor <= 20){
        complx = "MEDIA";
    } else if (valor <= 50){
        complx = "FORTE";
    } else{
        complx = "SUPER_FORTE";
    }
    printf("%d;", valor);
    cout << complx << endl;
    return 0;
}
