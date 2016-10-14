#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n, fatorial = 1;
    cin >> n;
    for (int cont = n; cont > 1; cont--){
        fatorial *= cont;
    }
    printf("Fatorial: %d\n", fatorial);
    return 0;
}
