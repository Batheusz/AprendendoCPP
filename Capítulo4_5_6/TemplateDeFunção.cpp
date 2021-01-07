#include <iostream>
using namespace std;
#include "Template.h"

//Sobrecarga normalmente é utilizada para operações semelhantes, porém lógica diferente.
//Caso a operação e a lógica seja semalhante é melhor utilizar templates.
//O programador escreve uma unica definição de template, considerando os tipos de argumentos o C++ gera suas especializações para tratar adequadamente.
//Toda definição de template começa pela palavra "template" e depois a lista de parâmetros de template entre < >.
//Cada parâmetro é precedido por "typename" ou por "class".
//Esses parâmetros servem para marcar os lugares dos tipos que serão obtidos do usuário.
    //Como o nosso template do header mostra a criação de um tipo T que será o tipo de retorno da função e de suas variáveis.

int main()
{
    int num1{0}, num2{2}, num3{-1};
    double d1{2.5}, d2{2}, d3{4.7};
    char c1{'a'}, c2{'c'}, c3{'b'};

    cout<<"O valor maximo eh:" << maximo(num1, num2, num3) << endl;//Define para T o tipo int.
    //Logo a função também retornará um int pois também é do tipo T.

    cout<<"O valor maximo eh:" << maximo(d1, d2, d3) << endl;//Define para T o tipo double.

    cout<<"O valor maximo eh:" << maximo(c1, c2, c3) << endl;//Define para T o tipo char

    //Note que todos os argumentos passados tem que ser do mesmo tipo, pois nosso template definiu que eles seriam do tipo T.

    return 0;
}