#include <iostream>

using namespace std;

void desenhar(int, char);

int main(){
    int n;
    char c;
    cout << "n: ";
    cin >> n;
    cout << "Caractere: ";
    cin >> c;
    desenhar(n, c);
    return 0;
}

void desenhar(int n, char c){
    for (int l = 1; l <= n; l++){
        for (int col = 1; col <= n; col++){
            cout << c;
        }
        cout << endl;
    }
}