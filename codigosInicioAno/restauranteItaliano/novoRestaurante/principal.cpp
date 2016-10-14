/*
    Rafael dos Santos Braz - 120121
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "operacional.h"

using namespace std;

int main(){
  preencher_cardapio();
  for (int c = 0; c < 25; c++){
    mesas[c].codigo = c + 1;
    reset_mesa(mesas[c]);
  }
  bool perm = true;
  do{
    limpa_tela();
    exibir_cardapio();
    perm = inserir_pedido();
    if (perm == true){
      verificar_mesas();
    }
  } while (perm);
  return 0;
}
