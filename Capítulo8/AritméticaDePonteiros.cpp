#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Ponteiros são operandos válidos em expressões aritméticas, atribuição e comparação.
    array<int, 3> nota{2, 4, 6};
    int valor[3]{1, 3, 5};
    int *notaPtr = &nota[0];
    // Ao utilizar a biblioteca que implementa arrays é necessário informar seu endereço de memória.
    int *valorPtr = valor; 
    // Ao utilizar de arrays padrão do C não é necessário informar o endereço de memória, pois o nome do array é sempre equivalente ao seu endereço.
    // Ou seja, o programa sempre le um nome de array do C como &nome[0].
    cout << "Valor apontado em nota eh: " << *notaPtr << endl;
    cout << "Valor apontado em valor eh: " << *valorPtr << endl;

    //Adicionando 2 * tamanho do tipo apontado para o endereço de memória do ponteiro
    notaPtr += 2;
    //Adicionando 1 * tamanho do tipo apontado para o endereço de memória do ponteiro
    valorPtr++;
    cout << "Valor apontado em nota eh: " << *notaPtr << endl;
    cout << "Valor apontado em valor eh: " << *valorPtr << endl;

    //Removendo
    notaPtr = notaPtr - 2;
    --valorPtr;
    cout << "Valor apontado em nota eh: " << *notaPtr << endl;
    cout << "Valor apontado em valor eh: " << *valorPtr << endl;

    // Ponteiros podem apontar para ponteiros do mesmo tipo.
        // Caso sejam de tipos diferentes será necessário transformar o ponteiro da direita no tipo do da esquerda, exceto quando o da esquerda é do tipo void.
        // Ponteiros void não podem ser desreferenciados pois o programa não sabe para quantos bytes do endereço de memória está apontando e nem seu tipo.
    valorPtr = notaPtr;
    valorPtr += 2;
    cout << "Valor apontado em nota eh: " << *notaPtr << endl;
    cout << "Valor apontado em valor eh: " << *valorPtr << endl;

    int x = valorPtr - notaPtr;
    cout << "X = " << x << endl;
    // Ponteiros que apontam para um mesmo array podem ser subtraídos e o resultado será o número de elementos de um ponteiro até outro.
    x = notaPtr - valorPtr;
    cout << "X = " << x << endl;
    // Tome cuidado que valores negativos podem ser gerados.
}