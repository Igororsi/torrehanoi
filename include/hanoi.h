#ifndef HANOI_H
#define HANOI_H

#include <stack>

void resolverHanoi(int n, 
                   std::stack<int>& origem,
                   std::stack<int>& destino,
                   std::stack<int>& auxiliar,
                   char nomeOrigem,
                   char nomeDestino,
                   char nomeAuxiliar,
                   int& movimentos);

void imprimirHastes(std::stack<int> A,
                    std::stack<int> B,
                    std::stack<int> C);

#endif