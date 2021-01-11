#include <iostream>
using namespace std;

int main()
{
    // Existem 4 combinações que podem ser feitas com passagem de ponteiros e  constantes.
    //  1º Ponteiro não constante para dados não constantes
        // Os dados podem ser modificados e o ponteiro pode apontar para outro dado.
        // void função(tipo *ptr)
    // 2º Ponteiro não constante para dados constantes
        // Os dados não podem ser modificados e o ponteiro poder apontar para outro dado.
        // void função(const tipo *ptr)
        // Alguns programadores preferem escrever tipo const *ptr para deixar mais fácil o entendimento que const se refere ao tipo.
        //  int const *ptr
        // A leitura é feita da esquerda para direita como ptr é um ponteiro para um const int.
    // 3º Ponteiro constante e dados não constantes
        // Os dados na localização do ponteiro podem ser modificados e o ponteiro não aponta para outro dado.
        // void função(tipo *const ptr)
        //Ponteiro é uma constante que aponta para um tipo.
    // 4º Ponteiro constante e dados constantes
        // os dados não podem ser modificados e o ponteiro não aponta para outro lado.
        // void função(const tipo *const ptr)
        // Ponteiro constante aponta para um tipo constante.
}