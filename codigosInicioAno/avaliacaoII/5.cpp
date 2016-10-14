#include <iostream>;

using namespace std;

int main(){
    string frase, palavra;
    int quant = 0;
    getline(cin, frase);
    cin >> palavra;
    for (int cont = 0; cont <= frase.length() - palavra.length(); cont++){
        bool rep = true;
        for (int c = 0; c < palavra.length(); c++){
            if (frase[cont + c] != palavra[c]){
                rep = false;
                break;
            }
        }
        if (rep){
            quant++;
        }
    }
    cout << quant << endl;
    return 0;
}
