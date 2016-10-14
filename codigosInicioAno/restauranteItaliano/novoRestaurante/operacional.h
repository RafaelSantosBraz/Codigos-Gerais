/*
    Rafael dos Santos Braz - 120121
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

#define TAM 14

using namespace std;

struct Item{
  int codigo;
  string descricao;
  double valor;
  int categoria;
};

struct Mesa{
  int codigo;
  bool situacao;
  Item pedidos[50];
  int posi_pedidos;
};

Item cardapio[TAM];
Mesa mesas[25];

void preencher_cardapio();
void reset_mesa(Mesa);
bool inserir_pedido();
Item busca_item(int);
void verificar_mesas();
void fechar_conta(Mesa);
void limpa_tela();
void exibir_cardapio();
void imprimir_cabecalho(string palavra);
string centralizar(string palavra, int maximo);
void imprimir_item(Item cod);

bool inserir_pedido(){
  int cod, op;
  cout << "\nInforme o número da Mesa, ou -10 para sair: ";
  cin >> cod;
  if (cod == -10){
    return false;
  } else{
    if (mesas[cod - 1].situacao == true){
      cout << "Informe o código do pedido: ";
      cin >> op;
      mesas[cod - 1].pedidos[mesas[cod - 1].posi_pedidos++] = busca_item(op);
      return true;
    }
  }
}

void verificar_mesas(){
  for (int c = 0; c < 25; c++) {
    if (mesas[c].posi_pedidos == 50){
      fechar_conta(mesas[c]);
      break;
    }
  }
}

Item busca_item(int op){
  for (int c = 0; c < TAM; c++) {
    if (cardapio[c].codigo == op){
      return cardapio[c];
    }
  }
}

void preencher_cardapio(){
  int codigos[] = {1,2,3,4,11,12,13,14,21,22,31,32,33,34};
  int categorias[] = {1,1,1,1,2,2,2,2,3,3,4,4,4,4};
  string descricoes[] = {"Ravioli de Queijo", "Fettuccine de Camarões", "Cappeletti Recheado", "Espaguete com frutos do mar", "Cerveja Artesanal ", "Suco Organico Natural ", "Vinho do Porto", "Grappa Italiana ", "Mousse de Chocolate", "Doce de Nozes", "Espresso Macchiato", "Caffe Latte", "Mocca", "Cappuccino"};
  double valores[] = {50.00, 80.00, 40.00, 87.00, 15.00, 12.00, 20.00, 17.00, 6.00, 9.00, 12.00, 8.00, 11.00, 13.00};
  for (int c = 0; c < TAM; c++) {
    cardapio[c].codigo = codigos[c];
    cardapio[c].descricao = descricoes[c];
    cardapio[c].valor = valores[c];
    cardapio[c].categoria = categorias[c];
  }
}

void reset_mesa(Mesa cmesa){
  mesas[cmesa.codigo - 1].situacao = true;
  mesas[cmesa.codigo - 1].posi_pedidos = 0;
}

void fechar_conta(Mesa cmesa){
  double total = 0.0;
  for (int c = 0; c < 50; c++){
      total += cmesa.pedidos[c].valor;
  }
  limpa_tela();
  stringstream s;
  s << cmesa.codigo;
  string num = s.str();
  imprimir_cabecalho("RECIBO MESA " + num);
  for (int c = 0; c < 50; c++){
      imprimir_item(cmesa.pedidos[c]);
  }
  reset_mesa(mesas[cmesa.codigo - 1]);
  string corre = "";
  int tam = 0;
  double aux = total;
  do{
      tam++;
      aux /= 10.0;
  } while (aux >= 1);
  for (int c = 1; c <= 40 - (tam + 3); c++){
      corre += " ";
  }
  cout << "+-----------+-----------------------------+------------+" << endl;
  printf("| TOTAL (R$) = %.2f%s|\n", total, corre.c_str());
  cout << "+------------------------------------------------------+\n" << endl;
  system("pause");
}

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
    cout << "|  CÓDIGO   |          DESCRIÇÃO          | VALOR (R$) |" << endl;
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
