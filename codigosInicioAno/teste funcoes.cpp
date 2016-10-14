#include <iostream>
#include <cstdio>

using namespace std;

double potencia(double, double);
bool par_impar(int);
bool valida_data(int, int, int);
bool bissexto(int);
int fatorial(int);
long potencia_recurssao(long, long);
long fib(long);

int main(){
    double x,y;
    //cin >> x >> y;
    //printf("%f\n", potencia(x,y));
    //cout << potencia_recurssao(2,100);
    cout << fib(45);
    return 0;
}

long fib(long f){
    //cout << f << endl;
    if (f == 1 || f == 2){
        return 1;
    }
    return fib(f -1) + fib(f -2);
}

long potencia_recurssao(long base, long exp){
    if (exp == 0){
        return 1;
    }
    return base * potencia_recurssao(base, exp - 1);
}

int fatorial(int n){
    if  (n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

double potencia(double base, double exp){
    double pot = 1.0;
    if (exp > 0){
        for (int c = 1; c <= exp; c++){
            pot *= base;
        }
    } else if (exp < 0){
        exp *= -1;
        for (int c = 1; c <= exp; c++){
            pot *= base;
        }
        pot = 1.0 / pot;
    }
    return pot;
}

bool par_impar(int n){
    bool retorno = true;
    if (n % 2 != 0){
        retorno = false;
    }
    return retorno;
}

bool valida_data(int dia, int mes, int ano){
    bool retorno = false;
    if (ano > 0){
        switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (dia > 0 && dia < 32){
                retorno = true;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia > 0 && dia < 31){
                retorno = true;
            }
            break;
        case 2:
            int fev = 28;
            if (bissexto(ano)){
                fev++;
            }
            if (dia > 0 && dia <= fev){
                retorno = true;
            }
        }
        return retorno;
    } else{
        return false;
    }
}

bool bissexto(int ano){
    if (ano % 100 != 0){
        if (ano % 4 == 0){
            return true;
        } else{
            return false;
        }
    } else{
        if (ano % 400 != 0){
            return false;
        } else{
            return true;
        }
    }
}
