#include <iostream>
//#include <cstdlib>

using namespace std;

void uniao(int a[], int ta, int b[], int tb);
void ordenar(int x[], int tam);
void mostrar(int x[], int t);
void intersecao(int a[], int ta, int b[], int tb);
void diferenca(int a[], int ta, int b[], int tb);

int main() {
  int a[] = {1, 2, 3, 4}, b[] = {1,3,4,12};
  uniao(a, sizeof(a)/4, b, sizeof(b)/4);
  intersecao(a, sizeof(a)/4, b, sizeof(b)/4);
  diferenca(a, sizeof(a)/4, b, sizeof(b)/4);
  return 0;
}

void uniao(int a[], int ta, int b[], int tb){
  bool ignorar[tb];
  int redutor = 0;
  for (int i = 0; i < tb; i++) {
    ignorar[i] = false;
  }
  for (int j = 0; j < ta; j++) {
    for (int i = 0; i < tb; i++) {
      if (a[j] == b[i]) {
        redutor++;
        ignorar[i] = true;
      }
    }
  }
  int c[ta + tb - redutor];
  for (int i = 0; i < ta; i++) {
    c[i] = a[i];
  }
  int u = ta - 1;
  for (int i = 0; i < tb; i++) {
    if (ignorar[i] == false){
      c[u + 1] = b[i];
      u++;
    }
  }
  ordenar(c, ta + tb - redutor);
  mostrar(c, ta + tb - redutor);
}

void ordenar(int x[], int tam){
  for (int c = 0; c < tam; c++){
       for (int i = 0; i < tam - 1; i++){
            if (x[i] > x[i+1]){
                int aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
            }
       }
    }
}

void mostrar(int x[], int t){
  cout << "C = {";
  for (int i = 0; i < t; i++){
    cout << x[i];
    if (i != t - 1){
      cout << ", ";
    }
  }
  cout << "}\n";
}

void intersecao(int a[], int ta, int b[], int tb){
  bool copiar[ta];
  int quant = 0;
  for (int i = 0; i < ta; i++) {
    copiar[i] = false;
  }
  for (int j = 0; j < ta; j++) {
    for (int i = 0; i < tb; i++) {
      if (a[j] == b[i]) {
        quant++;
        copiar[j] = true;
      }
    }
  }
  int c[quant];
  int p = 0;
  for (int i = 0; i < ta; i++) {
    if (copiar[i] == true){
      c[p++] = a[i];
    }
  }
  ordenar(c, quant);
  mostrar(c, quant);
}

void diferenca(int a[], int ta, int b[], int tb){
  bool ignorar[ta];
  int redutor = 0;
  for (int i = 0; i < ta; i++) {
    ignorar[i] = false;
  }
  for (int j = 0; j < ta; j++) {
    for (int i = 0; i < tb; i++) {
      if (a[j] == b[i]) {
        redutor++;
        ignorar[j] = true;
      }
    }
  }
  int c[ta - redutor];
  int u = 0;
  for (int i = 0; i < ta; i++) {
    if (ignorar[i] == false){
      c[u++] = a[i];
    }
  }
  ordenar(c, ta - redutor);
  mostrar(c, ta - redutor);
}
