#include <iostream>

using namespace std;

int main(){
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u')){
        cout << "VOGAL" << endl;
    } else {
        cout << "CONSOANTE" << endl;
    }
return 0;
}
