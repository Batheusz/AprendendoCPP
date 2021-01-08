#include <iostream>
#include <array>
using namespace std;

//Arrays são estruturas de dados consistindo em itens de dados relacionados do mesmo tipo.
//Arrays possuem sempre o mesmo tamanho por toda execução do programa.
//https://prnt.sc/wj5lvw
int main()
{
    //DECLARANDO NA FORMA ANTIGA.
    int notas[3] {10, 9, 7}; //tipo Nome[Tamanho]. 
    
    //Todo array inicia pela posição 0, ou seja, para acessar seus valores devemos fazer da seguinte forma:
    cout << notas[0] << " " << notas[1] << " " << notas[2] <<endl;
    //notas[0] é o primeiro elemento de nosso array e ocupa a posição 0
    //notas[1] é o segundo elemento e de posição 1
    //notas[2] é o terceiro elemento e de posição 2

    int zerado[10] {0};//Ao definir somente um valor do array e esse ser zero todos os seus elementos são zerados.

    for(int i = 0; i < 10; ++i)
    {
        cout << zerado[i] << endl;
    }

    //DECLARANDO NA FORMA NOVA DO C++.

    array<int, 5> n {0};//Utiliza do template array<tipo, tamanho> nome;
    //Também poderia ser feito n {} para inicar todos elementos com 0
    for(int i = 0; i < n.size(); ++i)
    //Realizando a inicialização de um array por um template é possível pegar seu tamanho com .size() e assim ter um código mais seguro caso seu tamanho mude.
    {
        cout << n[i] << " ";
    }
}