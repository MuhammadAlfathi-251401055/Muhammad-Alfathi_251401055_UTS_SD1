#include <iostream>
using namespace std;

int main() {
    int array[2][3][4];

    int angka = 2;

    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 4; k++) {
                    array[i][j][k] = angka;
                    angka += 2;
                }
            } 
        } else {
            angka = 1;
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 4; k++) {
                    array[i][j][k] = angka;
                    angka += 2;
                }
            } 
        }
        
    }

    int hasil[2][3][4];
    cout << "Hasil Penjumlahan Lapis 1 (Genap) dan Lapis 2 (Ganjil):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
               hasil[i][j][k] = array[i][j][k] + array[i+1][j][k];
            }
        }
    }

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
               cout << hasil[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
}