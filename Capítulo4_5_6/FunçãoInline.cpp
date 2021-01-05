#include <iostream>
using namespace std;


//Ao se colocar o indentificador inline antes de uma função o código aconselha o compilador a criar uma cópia da função ao invés de chama-la.
//Normalmente se ganha um pouco de desempenho e é utilizado em funções pequenas, pois por ser um conselho o compilador pode ignorar, comumente ocorre em funções maiores.
inline int quadrado(int);
int main()
{
    quadrado(2);//quadrado não será chamada, mas sim criada uma cópia de seu código.
}

inline int quadrado(const int x)//const serve para dizer que quadrado não modificará o valor de int x.
{
    return x * x;
}