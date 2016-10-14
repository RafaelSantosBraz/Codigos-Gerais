#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float n1, n2, n3, total;
    cout << "Informe as 3 notas do aluno: \n";
    cin >> n1 >> n2 >> n3;
    total = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10.0;
    printf("Media final: %f\n", total);
    return 0;
}

