#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool primo = true;
    for (int cont = n - 1; cont > 1; cont--){
        if (n % cont == 0){
            primo = false;
            break;
        }
    }
    if (primo == true){
        cout << "Primo!\n";
    } else{
        cout << "Nao eh primo!\n";
    }
    return 0;
}
