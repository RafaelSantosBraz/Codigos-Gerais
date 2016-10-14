#include <iostream>

using namespace std;

int main(){
    int anos, meses, dias, total;
    cout << "Informe a idade em anos, meses e dias: ";
    cin >> anos >> meses >> dias;
    total = (anos * 365) + (meses * 30) + dias;
    cout << "Idade em dias: " << total << endl;
    return 0;
}
