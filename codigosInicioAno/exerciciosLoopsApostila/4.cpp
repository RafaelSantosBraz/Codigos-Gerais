#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    float nota = 0.0, soma = 0.0, nota_anterior = 0.0, nota_menor = 10.0;
    int quant = 0, quant_inf_7;
    while (nota >= 0.0){
        cout << "Informe a nota: ";
        cin >> nota;
        if (nota >= 0.0){
            soma += nota;
            quant++;
            if (nota > nota_anterior){
                nota_anterior = nota;
            }
            if (nota < nota_menor){
                nota_menor = nota;
            }
            if (nota < 7.0){
                quant_inf_7++;
            }
        }
    }
    if (quant > 0){
        printf("Media da sala: %f\n", (soma / quant));
    }
    printf("Maior nota: %f\nMenor nota: %f\nQuantidade de notas menores que 7: %d", nota_anterior, nota_menor, quant_inf_7);
    return 0;
}
