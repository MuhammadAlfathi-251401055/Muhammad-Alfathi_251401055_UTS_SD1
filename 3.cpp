#include <iostream>
#include <string>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value) {
    if (top == MAX - 1) {
        cout << "Stack Penuh!\n";
    } else {
        top++;
        stack[top] = value;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack kosong!\n";
        return '\0';
    } else {
        char item = stack[top];
        top--;
        return item;
    }
    cout << endl;
}

int main() {

    string kata;

    cout << "Masukkan kata: ";
    cin >> kata;

    for (char c : kata) {
        push(c);
    }

    string cekkata;
    while (top != -1) {
        cekkata += pop();
    }

    cout << "Pengecekan: " << endl;
    cout << "Kata dibalik: " << cekkata << endl;
    
    if (kata == cekkata) {
        cout << "Kesimpulan: KATA INI ADALAH PALINDROM";
    } else {
        cout << "Kesimpulan: BUKAN PALINDROM";
    }


    cout << endl;

    return 0;
}