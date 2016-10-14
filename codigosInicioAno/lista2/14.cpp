#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(string eita){
    int idade = 0, maior_idade = 0, menor_idade = 2147483647, idade_menor_salario = 0, quant = 0, salario_menor_mil = 0;
    double media = 0.0, menor_salario = 1.7 * pow(10, 308);
    char sexo_menor_salario = 157;
    while (idade >= 0){
        cout << "Informe a idade: ";
        cin >> idade;
        if (idade >= 0){
            cout << "Informe o sexo (M/F): ";
            char sexo;
            cin >> sexo;
            sexo = toupper(sexo);
            cout << "Informe o salario: ";
            double salario;
            cin >> salario;
            media += salario;
            quant++;
            if (idade > maior_idade){
                maior_idade = idade;
            }
            if (idade < menor_idade){
                menor_idade = idade;
            }
            if (sexo == 'F' && salario <= 1000.00){
                salario_menor_mil++;
            }
            if (salario < menor_salario){
                menor_salario = salario;
                idade_menor_salario = idade;
                sexo_menor_salario = sexo;
            }
        }
    }
    if (quant > 0){
        printf("Media dos salarios: %f\n", media / quant);
    } else{
        printf("Media dos salarios: Resultado indefinido! (divisao por 0)\n");
    }
    printf("Maior idade: %d\n", maior_idade);
    if (quant > 1){
        printf("Menor idade: %d\n", menor_idade);
    } else{
        printf("Menor idade: %d\n", maior_idade);
    }
    printf("Quantidade de mulheres com salario ate 1000.00: %d\n", salario_menor_mil);
    printf("Dados da pessoa que possui menor salario:\n   Idade: %d\n   Sexo: %c\n", idade_menor_salario, sexo_menor_salario);
    return 0;
}
