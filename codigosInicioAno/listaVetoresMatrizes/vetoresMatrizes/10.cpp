#include <iostream>
#include <cstdio>
#define TAM 5

using namespace std;

int main(){
    int n[TAM];
    bool antes = false;
    for (int cont = 0; cont < TAM; cont++){
        cout << "Informe o caractere do numero: ";
        cin >> n[cont];
    }
    if (n[0] != 0){
        antes = true;
        if (n[0] == 1){
            switch(n[1]){
            case 0:
                cout << "DEZ";
                break;
            case 1:
                cout << "ONZE";
                break;
            case 2:
                cout << "DOZE";
                break;
            case 3:
                cout << "TREZE";
                break;
            case 4:
                cout << "QUATORZE";
                break;
            case 5:
                cout << "QUINZE";
                break;
            case 6:
                cout << "DEZESSEIS";
                break;
            case 7:
                cout << "DEZESSETE";
                break;
            case 8:
                cout << "DEZOITO";
                break;
            case 9:
                cout << "DEZENOVE";
                break;
            }
            cout << " MIL e";
        } else{
            switch(n[0]){
            case 2:
                cout << "VINTE";
                break;
            case 3:
                cout << "TRINTA";
                break;
            case 4:
                cout << "QUARENTA";
                break;
            case 5:
                cout << "CINQUENTA";
                break;
            case 6:
                cout << "SESSENTA";
                break;
            case 7:
                cout << "SETENTA";
                break;
            case 8:
                cout << "OITENTA";
                break;
            case 9:
                cout << "NOVENTA";
                break;
            }
            switch(n[1]){
            case 1:
                cout << " e UM";
                break;
            case 2:
                cout << " e DOIS";
                break;
            case 3:
                cout << " e TRES";
                break;
            case 4:
                cout << " e QUATRO";
                break;
            case 5:
                cout << " e CINCO";
                break;
            case 6:
                cout << " e SEIS";
                break;
            case 7:
                cout << " e SETE";
                break;
            case 8:
                cout << " e OITO";
                break;
            case 9:
                cout << " e NOVE";
                break;
            }
            cout << " MIL ";
        }
    } else if (n[1] != 0){
        antes = true;
        switch(n[1]){
        case 1:
            cout << "UM";
            break;
        case 2:
            cout << "DOIS";
            break;
        case 3:
            cout << "TRES";
            break;
        case 4:
            cout << "QUATRO";
            break;
        case 5:
            cout << "CINCO";
            break;
        case 6:
            cout << "SEIS";
            break;
        case 7:
            cout << "SETE";
            break;
        case 8:
            cout << "OITO";
            break;
        case 9:
            cout << "NOVE";
            break;
        }
        cout << " MIL ";
    }
    if (antes == true){
        cout << "e ";
    }
    antes = false;
    if (n[2] != 0){
        antes = true;
        switch(n[2]){
        case 1:
            if (n[3] == 0 && n[4] == 0){
                cout << "CEM";
            } else{
                cout << "CENTO";
            }
            break;
        case 2:
            cout << "DUZENTOS";
            break;
        case 3:
            cout << "TREZENTOS";
            break;
        case 4:
            cout << "QUATROCENTOS";
            break;
        case 5:
            cout << "QUINHENTOS";
            break;
        case 6:
            cout << "SEISCENTOS";
            break;
        case 7:
            cout << "SETECENTOS";
            break;
        case 8:
            cout << "OITOCENTOS";
            break;
        case 9:
            cout << "NOVECENTOS";
            break;
        }
    }
    if (antes == true){
        cout << " e ";
    }
    antes = false;
    if (n[3] != 0){
        antes = true;
        switch(n[3]){
        case 1:
            cout << "DEZ";
            break;
        case 2:
            cout << "VINTE";
            break;
        case 3:
            cout << "TRINTA";
            break;
        case 4:
            cout << "QUARENTA";
            break;
        case 5:
            cout << "CINQUENTA";
            break;
        case 6:
            cout << "SESSENTA";
            break;
        case 7:
            cout << "SETENTA";
            break;
        case 8:
            cout << "OITENTA";
            break;
        case 9:
            cout << "NOVENTA";
            break;
        }
    }
     if (antes == true){
        cout << " e ";
    }
    antes = false;
    if (n[4] != 0){
        switch(n[4]){
        case 1:
            cout << "UM";
            break;
        case 2:
            cout << "DOIS";
            break;
        case 3:
            cout << "TRES";
            break;
        case 4:
            cout << "QUATRO";
            break;
        case 5:
            cout << "CINCO";
            break;
        case 6:
            cout << "SEIS";
            break;
        case 7:
            cout << "SETE";
            break;
        case 8:
            cout << "OITO";
            break;
        case 9:
            cout << "NOVE";
            break;
        }
    }
    if (n[0] == 0 && n[1] == 0 && n[2] == 0 && n[3] == 0 && n[4] == 0){
        cout << "ZERO";
    }
    cout << endl;
    return 0;
}

