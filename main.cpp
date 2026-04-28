#include <iostream>
#include <stack>
#include "include/hanoi.h"

using namespace std;

int main() {
    int n;
    cout << "Digite o número de discos (1 a 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Valor inválido!" << endl;
        return 1;
    }

    stack<int> A, B, C;

    for (int i = n; i >= 1; i--) {
        A.push(i);
    }

    int movimentos = 0;

    cout << "\nEstado inicial:\n";
    imprimirHastes(A, B, C);
    cout << endl;

    resolverHanoi(n, A, C, B, 'A', 'C', 'B', movimentos);

    cout << "\nEstado final:\n";
    imprimirHastes(A, B, C);

    cout << "\nTotal de movimentos: " << movimentos << endl;

    return 0;
}