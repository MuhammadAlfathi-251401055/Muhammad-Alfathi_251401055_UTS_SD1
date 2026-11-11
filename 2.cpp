#include <iostream>
using namespace std;

struct Node {
    string nama;
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertFirst(string nama, int n) {

    Node *newNode = new Node;
    newNode -> nama = nama;
    newNode -> value = n;
    newNode -> next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    } else {
        newNode -> next = head;
        head = newNode;
    }
}

void insertLast(string nama, int n) {

    Node *newNode = new Node;
    newNode -> nama = nama;
    newNode -> value = n;
    newNode -> next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head;
    } else {
        tail -> next = newNode;
        tail = newNode;
    }
}

void deleteFirst() {
    if (head == NULL) {
        cout << "Linked list kosong, tidak ada node untuk dihapus.\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    if (head == NULL) {
        tail = NULL; 
    }
    delete temp;
}

void printList() {
    Node *temp = head;
    cout << endl << "Daftar peserta lolos (skor >= 75)" << endl; 
    while (temp != NULL) {
        if (temp -> value >= 75) {   
            cout << "- " << temp -> nama << " (Skor: " << temp -> value << ")" << endl;
        } temp = temp -> next;
    }
    cout << endl;
}

int main () {
    string nama;
    int pilihan, skor, check;
    while (true)
    {
        cout << "1. Tambah di awal\n";
        cout << "2. Tambah di akhir\n";
        cout << "3. Hapus di awal\n";
        cout << "4. Tampilkan linked list\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan skor: ";
            cin >> skor;
            cout << endl;
            insertFirst(nama, skor);
            break;
        case 2:
            cout << "Masukkan nama: ";
            cin >> nama;
            cout << "Masukkan skor: ";
            cin >> skor;
            insertLast(nama, skor);
            cout << endl;
            break;
        case 3:
            deleteFirst();
            cout << endl;
            break;
        case 4:
            printList();
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}