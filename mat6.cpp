#include <iostream>
using namespace std;

int main() {
    int matriz1[4][4], matriz2[4][4], matrizMaior[4][4];

    cout << "Digite os elementos da primeira matriz 4x4:" << endl;
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Digite os elementos da segunda matriz 4x4:" << endl;
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cin >> matriz2[i][j];
        }
    }

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            matrizMaior[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }

    cout << "A matriz com os maiores valores de cada posicao das matrizes lidas e:" << endl;
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cout << matrizMaior[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
