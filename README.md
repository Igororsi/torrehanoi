# Torre de Hanói em C++

## Descrição
Esse projeto resolve o problema da Torre de Hanói usando pilhas (stack) em C++.  
O usuário informa a quantidade de discos (de 1 a 10) e o programa mostra todos os movimentos até resolver.

## Requisitos
- Compilador C++ (GCC recomendado)
- Pode usar VS Code, Dev-C++, Code::Blocks ou qualquer outra IDE

## Compilação e Execução

No terminal:

```bash
g++ main.cpp src/hanoi.cpp -o hanoi
./hanoi

Funcionamento
O usuário informa o número de discos
Os discos começam na haste A
O programa resolve usando recursão
Mostra cada movimento no console
No final mostra o total de movimentos

Perguntas

Por que usar pilha?
Porque o problema só permite mexer no último disco colocado (topo), que é exatamente como funciona uma pilha (LIFO).

Dá pra fazer sem recursão?
Sim, dá pra fazer usando um método iterativo e simulando a pilha manualmente, mas fica mais complicado.
A recursão é mais simples de entender e implementar.

Autor
Igor Orsi Dallagnelo
28/04/2026