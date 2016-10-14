#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int fator;
    char simbolo;
    cin >> fator;
    cin >> simbolo;
    for (int cont = 1; cont <= fator; cont++){
        for (int estrelas = 1; estrelas <= fator; estrelas++){
            printf("%c", simbolo);
        }
        cout << endl;
    }
    return 0;
}
