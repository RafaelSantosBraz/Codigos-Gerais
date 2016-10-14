#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int quant_1_10 = 0, quant_11_20 = 0, quant_21_30 = 0, quant_31 = 0;
    double media_pesos_1_10 = 0.0, media_pesos_11_20 = 0.0, media_pesos_21_30 = 0.0, media_pesos_31 = 0.0;
    for (int cont = 1; cont <= 15; cont++){
        int idade;
        double peso;
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite o peso: ";
        cin >> peso;
        if (idade >= 1 && idade <= 10){
            media_pesos_1_10 += peso;
            quant_1_10++;
        } else if(idade >= 11 && idade <= 20){
            media_pesos_11_20 += peso;
            quant_11_20++;
        } else if(idade >= 21 && idade <= 30){
            media_pesos_21_30 += peso;
            quant_21_30++;
        } else{
            media_pesos_31 += peso;
            quant_31++;
        }
    }
    if (quant_1_10 > 0){
        printf("Media de 1 a 10 anos: %f\n", media_pesos_1_10 / quant_1_10);
    } else{
        printf("Media de 1 a 10 anos: Resultado indeterminado!\n");
    }
    if (quant_11_20 > 0){
        printf("Media de 11 a 20 anos: %f\n", media_pesos_11_20 / quant_11_20);
    } else{
        printf("Media de 11 a 20 anos: Resultado indeterminado!\n");
    }
    if (quant_21_30 > 0){
        printf("Media de 21 a 30 anos: %f\n", media_pesos_21_30 / quant_21_30);
    } else{
        printf("Media de 21 a 30 anos: Resultado indeterminado!\n");
    }
    if (quant_31 > 0){
        printf("Media de maior ou igual a 31 anos: %f\n", media_pesos_31 / quant_31);
    } else{
        printf("Media de maior ou igual a 31 anos: Resultado indeterminado!\n");
    }
    return 0;
}
