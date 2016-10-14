/*
    Rafael dos Santos Braz - 120121
    Obs: função limpa_tela configurada para Linux
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

void cardapio(void);
bool inserir_pedido(void);
bool verificar_disponibilidade(int);
void fechamento_conta(int);
double preco(int);
void limpa_tela(void);
string descricao(int);
void imprimir_item(int);
int buscar_posicao(int);
void imprimir_cabecalho(string);
string centralizar(string, int);

int pedidos[25][50];
int codigos[14] = {1,2,3,4,11,12,13,14,21,22,31,32,33,34};

void cardapio(){
    limpa_tela();
    imprimir_cabecalho("COMIDAS");
    for (int c = 0; c < 4; c++){
        imprimir_item(codigos[c]);
    }
    imprimir_cabecalho("BEBIDAS");
    for (int c = 4; c < 8; c++){
        imprimir_item(codigos[c]);
    }
    imprimir_cabecalho("SOBREMESAS");
    for (int c = 8; c < 10; c++){
        imprimir_item(codigos[c]);
    }
    imprimir_cabecalho("CAFFE ESPRESSO");
    for (int c = 10; c < 13; c++){
        imprimir_item(codigos[c]);
    }
    cout << "+-----------+-----------------------------+------------+" << endl;
}

bool inserir_pedido(){
    bool valido = false;
    int laco = 0;
    int aux;
    do{
        printf("\nObs: insira um valor negativo para fechar o restaurante :)\n");
        if (laco == 0){
            cout << "\nInforme o codigo da mesa: ";
        } else{
            limpa_tela();
            cardapio();
            cout << "\nCodigo INVALIDO\n";
            cout << "\nInforme um codigo valido da mesa: ";
        }
        laco++;
        cin >> aux;
        if (aux > 0 && aux < 26){
            valido = true;
        } else if (aux < 0){
            return false;
        }
    } while (valido == false);
    aux--;
    bool disponivel = verificar_disponibilidade(aux);
    if (disponivel == true){
        valido = false;
        laco = 0;
        int aux2;
        do{
            printf("\nObs: Digite 42 para fechar a conta (fechamento automatico quando atingir o limite)\n");
            if (laco == 0){
                cout << "\nInforme o codigo do pedido: ";
            } else{
                limpa_tela();
                cardapio();
                cout << "\nCodigo INVALIDO\n";
                cout << "\nInforme um codigo valido do pedido: ";
            }
            laco++;
            cin >> aux2;
            if ((aux2 > 0 && aux2 < 5) || (aux2 > 10 && aux2 < 15) || (aux2 > 20 && aux2 < 23) || (aux2 > 30 && aux2 < 35)){
                valido = true;
            } else if (aux2 == 42){
                limpa_tela();
                fechamento_conta(aux);
                return true;
            }
        } while (valido == false);
        pedidos[aux][buscar_posicao(aux)] = aux2;
    } else{
        limpa_tela();
        fechamento_conta(aux);
    }
    return true;
}

bool verificar_disponibilidade(int mesa){
    bool disponivel = false;
    for (int c = 0; c < 50; c++){
        if (pedidos[mesa][c] == 0){
            disponivel = true;
            break;
        }
    }
    return disponivel;
}

void fechamento_conta(int mesa){
    double total = 0.0;
    for (int c = 0; c < 50; c++){
        total += preco(pedidos[mesa][c]);
    }
    imprimir_cabecalho("RECIBO");
    for (int c = 0; c < 50; c++){
        if (pedidos[mesa][c] != 0){
            imprimir_item(pedidos[mesa][c]);
        }
    }
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
    cout << "Informe qualquer numero para encerrar conta e retornar ao menu: ";
    int pausa;
    cin >> pausa;
    for (int l = 0; l < 50; l++){
        pedidos[mesa][l] = 0;
    }
}

double preco(int cod){
    switch (cod){
    case 1:
        return 50.00;
    case 2:
        return 80.00;
    case 3:
        return 40.00;
    case 4:
        return 87.00;
    case 11:
        return 15.00;
    case 12:
        return 12.00;
    case 13:
        return 20.00;
    case 14:
        return 17.00;
    case 21:
        return 6.00;
    case 22:
        return 9.00;
    case 31:
        return 12.00;
    case 32:
        return 8.00;
    case 33:
        return 11.00;
    case 34:
        return 13.00;
    }
}

void limpa_tela(){
    system("cls");
}

string descricao(int cod){
    switch (cod){
    case 1:
        return "Ravioli de Queijo";
    case 2:
        return "Fettuccine de Camaroes";
    case 3:
        return "Cappeletti Recheado";
    case 4:
        return "Espaguete com frutos do mar";
    case 11:
        return "Cerveja Artesanal";
    case 12:
        return "Suco Organico Natural";
    case 13:
        return "Vinho do Porto";
    case 14:
        return "Grappa Italiana";
    case 21:
        return "Mousse de Chocolate";
    case 22:
        return "Doce de Nozes";
    case 31:
        return "Espresso Macchiato";
    case 32:
        return "Caffe Latte";
    case 33:
        return "Mocca";
    case 34:
        return "Cappuccino";
    }
}

void imprimir_item(int cod){
    double valor = preco(cod);
    if (valor >10.00){
        printf("|    %2d     |%s|    %.2f   |\n", cod, centralizar(descricao(cod), 29).c_str(), valor);
    } else{
        printf("|    %2d     |%s|    %.2f    |\n", cod, centralizar(descricao(cod), 29).c_str(), valor);
    }
}

int buscar_posicao(int mesa){
    int c;
    for (c = 0; c < 50; c++){
        if (pedidos[mesa][c] == 0){
            break;
        }
    }
    return c;
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
