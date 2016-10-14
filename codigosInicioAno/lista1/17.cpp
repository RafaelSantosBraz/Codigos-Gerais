#include <iostream>

using namespace std;

int main(){
    int faltas;
    double p1, p2, p3, p4, t1, t2, nota, exame;
    cout << "Informe a quantidade de faltas: ";
    cin >> faltas;
    if (faltas <= 36){
        cout << "Informe a nota da primeira avaliacao escrita: ";
        cin >> p1;
        cout << "Informe a nota da segunda avaliacao escrita: ";
        cin >> p2;
        cout << "Informe a nota da terceira avaliacao escrita: ";
        cin >> p3;
        cout << "Informe a nota da quarta avaliacao escrita: ";
        cin >> p4;
        cout << "Informe a nota do primeiro trabalho: ";
        cin >> t1;
        cout << "Informe a nota do segundo trabalho: ";
        cin >> t2;
        nota = ((p1 * 7.0) + (p2 * 7.0) + (p3 * 7.0) + (p4 * 7.0) + (t1 * 3.0) + (t2 * 3.0)) / 34.0;
        if (nota >= 7.0){
            cout << "Aluno APROVADO" << endl;
        } else if (nota < 4.0){
            cout << "Aluno REPROVADO" << endl;
        } else{
            cout << "Aluno de EXAME!" << endl;
            cout << "Informe a nota do exame: ";
            cin >> exame;
            nota = (nota + exame) / 2.0;
            if (nota >= 5.0){
                cout << "Aluno APROVADO" << endl;
            } else{
                cout << "Aluno REPROVADO" << endl;
            }
        }
    } else{
        cout << "Aluno RETIDO" << endl;
    }
    return 0;
}

