#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int quant;
    cin >> quant;
    int primeiro = 1, segundo = 0;
    for (int cont = 1; cont <= quant; cont++){
        int aux = primeiro + segundo;
        printf("%d\n", aux);
        primeiro = segundo;
        segundo = aux;
    }
    return 0;
}
