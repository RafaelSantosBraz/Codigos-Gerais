#include <iostream>;

using namespace std;

int main(){
    char letra = 'a';
    for (int l = 8; l >= 1; l--){
        for (int c = 0; c < 8; c++){
            cout << char(letra + c) << l << " ";
        }
        cout << endl;
    }
    return 0;
}
