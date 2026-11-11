#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

Node* buatNode(int data) {
    Node* baru = new Node;

    baru->data = data;
    baru->kiri = NULL;
    baru->kanan = NULL;

    return baru;
}

Node* insert(Node* akar, int data) {

    // Jika posisi kosong, maka akan buat node baru
    if(akar == NULL){
        return buatNode(data);
    }

    // Jika data lebih kecil, maka akan masuk ke kiri
    if(data < akar->data){
        akar->kiri = insert(akar->kiri, data);
    }

    // Jika data lebih besar, maka akan masuk ke kanan
    else if(data > akar->data){
        akar->kanan = insert(akar->kanan, data);
    }
    return akar;
}

void inOrder(Node* akar) {
    if(akar != NULL){
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}



int main() {

    Node* akar = NULL;
    int angka;

    cout << "Masukkan angka (0 untuk berhenti):\n";

    while (true) {

        cout << "Input: ";
        cin >> angka;

        if(angka == 0){
            break;
        }
    
        akar = insert(akar, angka);
    }

    cout << "\nHasil Traversal:\n";

    cout << "\nIn-order   : ";
    inOrder(akar);
    
    int min;
    int max;

    cout << "Nilai terkecil: " << min << endl;
    cout << "Nilai terbesar: " << max << endl;

    return 0;
}