#include <iostream>
#include <string>

using namespace std;

int main(){
    string n1, n2;
    cin >> n1 >> n2;
    stringstream x(n1);
    for (int cont = x.str()); cont <= stoi(n2.c_str()); cont++){

    }
    return 0;
}
