/*
    Rafael dos Santos Braz - 120121
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "operacional.h"

using namespace std;

void limpa_tela();
void exibir_cardapio();
void imprimir_cabecalho(string palavra);
string centralizar(string palavra, int maximo);
void imprimir_item(Item cod);

void limpa_tela(){
  system("cls");
}

void exibir_cardapio(){
  imprimir_cabecalho("COMIDAS");
  for (int c = 0; c < TAM; c++){
      if (cardapio[c].categoria == 1){
          imprimir_item(cardapio[c]);
      }
  }
  imprimir_cabecalho("BEBIDAS");
  for (int c = 0; c < TAM; c++){
      if (cardapio[c].categoria == 2){
          imprimir_item(cardapio[c]);
      }
  }
  imprimir_cabecalho("SOBREMESAS");
  for (int c = 0; c < TAM; c++){
      if (cardapio[c].categoria == 3){
          imprimir_item(cardapio[c]);
      }
  }
  imprimir_cabecalho("CAFFE ESPRESSO");
  for (int c = 0; c < TAM; c++){
      if (cardapio[c].categoria == 4){
          imprimir_item(cardapio[c]);
      }
  }
  cout << "+-----------+-----------------------------+------------+" << endl;
}

void imprimir_cabecalho(string palavra){
    cout << "+------------------------------------------------------+" << endl;
    printf("|%s|\n", centralizar(palavra, 54).c_str());
    cout << "+-----------+-----------------------------+------------+" << endl;
    cout << "|  CODIGO   |          DESCRICAO          | VALOR (R$) |" << endl;
    cout << "+-----------+-----------------------------+------------+" << endl;
}

string centralizar(string palavra, int maximo){
    int aux = (maximo - palavra.length()) / 2;
    string retorno = "";
    for (int c = 1; c <= aux; c++){
        retorno += " ";
    }
    retorno += palavra;
    for (int c = 1; c <= (maximo - palavra.length() - aux); c++){
        retorno += " ";
    }
    return retorno;
}

void imprimir_item(Item cod){
    if (cod.valor > 10.00){
        printf("|    %2d     |%s|    %.2f   |\n", cod.codigo, centralizar(cod.descricao, 29).c_str(), cod.valor);
    } else{
        printf("|    %2d     |%s|    %.2f    |\n", cod.codigo, centralizar(cod.descricao, 29).c_str(), cod.valor);
    }
}
