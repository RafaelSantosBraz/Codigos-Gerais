#include <iostream>
#include <cstdio>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    char boneco[7][7] = {
        {'+', '_', '_', '_', '+', ' ', ' '},
        {'|', ' ', ' ', ' ', '|', ' ', ' '},
        {'|', ' ', ' ', ' ', ' ', ' ', ' '},
        {'|', ' ', ' ', ' ', ' ', ' ', ' '},
        {'|', ' ', ' ', ' ', ' ', ' ', ' '},
        {'|', ' ', ' ', ' ', ' ', ' ', ' '},
        {'_', '_', '_', '_', '_', '_', '_'}
    };
    string premio[10];
    premio[0] = "Ursinho de pelucia";
    premio[1] = "Carrinho";
    premio[2] = "Preiteixo";
    premio[3] = "Jogo da vida";
    premio[4] = "Bola";
    premio[5] = "Boneco";
    premio[6] = "Pastel de catupily";
    premio[7] = "1 real";
    premio[8] = "Todos os premios";
    premio[9] = "Pastel de flango";
    string palavra[10];
    palavra[0] = "MELANCIA";
    palavra[1] = "RAFAEL";
    palavra[2] = "COMPUTADOR";
    palavra[3] = "PROGRAMACAO";
    palavra[4] = "WINDOWS";
    palavra[5] = "LINUX";
    palavra[6] = "MAC";
    palavra[7] = "TECLADO";
    palavra[8] = "MERCADO";
    palavra[9] = "PALAVRA";
    srand(time(NULL));
    int escolha = rand() % 10 + 1;
    string palavra_correta = palavra[escolha - 1];
    for (int cont = 0; cont < palavra[escolha - 1].length(); cont++){
        palavra[escolha - 1][cont] = '_';
    }
    bool fim = false, ganhou = false;
    int pontuacao_erro = 0;
    char letras_erradas[6] = {'?', '?', '?', '?', '?', '?'};
    string letras_usadas = "";
    do{
        for (int linha = 0; linha < 7; linha++){
            for (int coluna = 0; coluna < 7; coluna++){
                cout << boneco[linha][coluna];
            }
            cout << endl;
        }
        printf("A palavra tem %d letras: ", palavra_correta.length());
        for (int cont = 0; cont < palavra_correta.length(); cont++){
            cout << palavra[escolha - 1][cont];
            if (cont != palavra_correta.length() - 1){
                cout << ' ';
            }
        }
        cout << endl;
        cout << "Informe uma letra: ";
        char letra;
        cin >> letra;
        letra = toupper(letra);
        if (letras_usadas == ""){
            letras_usadas += letra;
        } else{
            bool ok = true;
            for (int cont = 0; cont < letras_usadas.length(); cont++){
                if (letra == letras_usadas[cont]){
                    ok = false;
                    break;
                }
            }
            if (ok == false){
                system("clear");
                cout << "Letra Ja utilizada!\n";
                continue;
            } else{
                letras_usadas += letra;
            }
        }
        bool aux = false;
        system("clear");
        for (int cont = 0; cont < palavra_correta.length(); cont++){
            if (palavra[escolha - 1][cont] == '_' && palavra_correta[cont] == letra){
                palavra[escolha - 1][cont] = letra;
                aux = true;
            }
        }
        if (aux == true){
            cout << "Encontrada!\n";
        } else{
            pontuacao_erro++;
            printf("Nao Encontrada! Voce tem %d erros. (", pontuacao_erro);
            letras_erradas[pontuacao_erro - 1] = letra;
            for (int cont = 0; cont < 6; cont++){
                cout << letras_erradas[cont];
                if (cont != 5){
                    cout << " ";
                }
            }
            cout << ")\n";
        }
        switch(pontuacao_erro){
        case 1:
            boneco[2][4] = 'O';
            break;
        case 2:
            boneco[3][4] = '|';
            break;
        case 3:
            boneco[3][3] = '/';
            break;
        case 4:
            boneco[3][5] = '\\';
            break;
        case 5:
            boneco[4][3] = '/';
            break;
        case 6:
            boneco[4][5] = '\\';
            break;
        }
        if (pontuacao_erro == 6){
            fim = true;
        } else{
            bool todas = true;
            for (int cont = 0; cont < palavra_correta.length(); cont++){
                if (palavra[escolha - 1][cont] == '_'){
                    todas = false;
                    break;
                }
            }
            if (todas == true){
                ganhou = true;
                fim = true;
            }
        }
    } while(fim == false);
    system("clear");
    for (int linha = 0; linha < 7; linha++){
        for (int coluna = 0; coluna < 7; coluna++){
            cout << boneco[linha][coluna];
        }
        cout << endl;
    }
    if (ganhou == false){
        cout << "Voce perdeu!\n";
    } else{
        srand(time(NULL));
        escolha = rand() % 10 + 1;
        cout << "Parabens! Premio: " << premio[escolha - 1] << ".\n";
    }
    return 0;
}
