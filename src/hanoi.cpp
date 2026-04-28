#include <iostream>
#include "../include/hanoi.h"

using namespace std;

void imprimirPilha(stack<int> p) {
    cout << "[";
    while (!p.empty()) {
        cout << p.top();
        p.pop();
        if (!p.empty()) cout << ", ";
    }
    cout << "]";
}

void imprimirHastes(stack<int> A, stack<int> B, stack<int> C) {
    cout << "A: ";
    imprimirPilha(A);
    cout << "   B: ";
    imprimirPilha(B);
    cout << "   C: ";
    imprimirPilha(C);
    cout << endl;
}

void resolverHanoi(int n,
                   stack<int>& origem,
                   stack<int>& destino,
                   stack<int>& auxiliar,
                   char nomeOrigem,
                   char nomeDestino,
                   char nomeAuxiliar,
                   int& movimentos) {

    if (n == 1) {
        int disco = origem.top();
        origem.pop();
        destino.push(disco);

        movimentos++;

        cout << "Mover disco " << disco 
             << " de " << nomeOrigem 
             << " para " << nomeDestino << endl;

        return;
    }

    resolverHanoi(n - 1, origem, auxiliar, destino,
                  nomeOrigem, nomeAuxiliar, nomeDestino, movimentos);

    resolverHanoi(1, origem, destino, auxiliar,
                  nomeOrigem, nomeDestino, nomeAuxiliar, movimentos);

    resolverHanoi(n - 1, auxiliar, destino, origem,
                  nomeAuxiliar, nomeDestino, nomeOrigem, movimentos);
}