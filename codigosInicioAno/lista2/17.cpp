#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    int voto = 0, turing = 0, dennis = 0, grace = 0, wirth = 0, margaret = 0, branco = 0, nulo = 0, total = 0;
    while (voto >= 0){
        cout << "Digite o codigo do candidato: ";
        cin >> voto;
        if (voto >= 0){
            switch (voto){
            case 0:
                branco++;
                break;
            case 93:
                turing++;
                break;
            case 94:
                dennis++;
                break;
            case 95:
                grace++;
                break;
            case 96:
                wirth++;
                break;
            case 97:
                margaret++;
                break;
            default:
                nulo++;
            }
            total++;
        }
    }
    if (total > 0){
        printf("Votos para Allan Turing: %d (%f%)\n", turing, (turing * 100.0) / total);
        printf("Votos para Dennis Ritchie: %d (%f%)\n", dennis, (dennis * 100.0) / total);
        printf("Votos para Grace Hopper: %d (%f%)\n", grace, (grace * 100.0) / total);
        printf("Votos para Niklaus Wirth: %d (%f%)\n", wirth, (wirth * 100.0) / total);
        printf("Votos para Margaret Hamilton: %d (%f%)\n", margaret, (margaret * 100.0) / total);
        printf("Votos em Branco: %d (%f%)\n", branco, (branco * 100.0) / total);
        printf("Votos nulos: %d (%f%)\n", nulo, (nulo * 100.0) / total);
        if ((turing > dennis) && (turing > grace) && (turing > wirth) && (turing > margaret)){
            cout << "Vencedor(a): Allan Turing\n";
        } else if ((dennis > turing) && (dennis > grace) && (dennis > wirth) && (dennis > margaret)){
            cout << "Vencedor(a): Dennis Ritchie\n";
        } else if ((grace > turing) && (grace > dennis) && (grace > wirth) && (grace > margaret)){
            cout << "Vencedor(a): Grace Hopper\n";
        } else if ((wirth > turing) && (wirth > dennis) && (wirth > grace) && (wirth > margaret)){
            cout << "Vencedor(a): Niklaus Wirth\n";
        } else if ((margaret > turing) && (margaret > dennis) && (margaret > grace) && (margaret > wirth)){
            cout << "Vencedor(a): Margaret Hamilton\n";
        } else{
            cout << "Houve empate!\n";
        }
    } else{
        cout << "Nunhum voto computado!\n";
    }
    return 0;
}
