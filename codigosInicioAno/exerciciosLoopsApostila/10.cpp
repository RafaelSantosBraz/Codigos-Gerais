#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int fator;
    cin >> fator;
    for (int cont = 1; cont <= fator; cont++){
        for (int estrelas = 1; estrelas <= fator; estrelas++){
            printf("*");
        }
        cout << endl;
    }
    return 0;
}
