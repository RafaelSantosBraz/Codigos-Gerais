/*
    Rafael dos Santos Braz - 120121
    Obs: função limpa_tela configurada para Linux
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "Funcoes.h"

using namespace std;

int main(){
    for (int l = 0; l < 25; l++){
        for (int c = 0; c < 50; c++){
            pedidos[l][c] = 0;
        }
    }
    bool perm = true;
    do{
        cardapio();
        perm = inserir_pedido();
    } while (perm);
    limpa_tela();
    cout << "Obrigado por utilizar nosso sistema!\n\nRAFAEL DOS SANTOS BRAZ - 2016. Nenhum Direito reservado.\n";
    return 0;
}
