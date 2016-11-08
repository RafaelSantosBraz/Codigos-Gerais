#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != EOF){
        int mat[n][n];
        /*for (int c = 0; c < n; c++){
            for (int i = 0; i < n; i++){
                mat[c][i] = 0;
            }
        }*/
        for (int c = 0; c < n; c++){
            mat[c][c] = 1;
        }
        int p = n - 1;
        for (int c = 0; c < n; c++){
            mat[c][p - c] = 2;
        }
        for (int c = 0; c < n; c++){
            for (int i = 0; i < n; i++){
                if (mat[c][i] != 1 && mat[c][i] != 2){
                    mat[c][i] = 3;
                }
            }
        }
        for (int c = 0; c < n; c++){
            for (int i = 0; i < n; i++){
                cout << mat[c][i];
            }
            cout << endl;
        }
        cin >> n;
    }
    return 0;
}