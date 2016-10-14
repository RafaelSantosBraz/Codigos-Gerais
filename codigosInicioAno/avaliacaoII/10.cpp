#include <iostream>;

using namespace std;

int main(){
    string frase, nova = "";
    int c;
    getline(cin, frase);
    cin >> c;
    for (int x = 0; x < frase.length(); x++){
        nova += char(frase[x] + c);
    }
    cout << nova << endl;
    frase = "";
    for (int x = 0; x < nova.length(); x++){
        frase += char(nova[x] - c);
    }
    cout << frase << endl;
    return 0;
}
