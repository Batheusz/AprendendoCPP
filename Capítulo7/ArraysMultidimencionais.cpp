#include <iostream>
#include <array>
using namespace std;
const int linha{3}, coluna{3};
int main()
{
    //Arrays podem possuir multidimenções, mas normalmente só são representados utilizando duas, ou seja, em forma de matriz.
    //Para declarar vc deve especificar o tamanho de suas linhas e colunas da seguinte forma:
    array<array <int, linha>, coluna> matriz{1, 2, 3, 4, 5, 6, 7, 8};
    for(auto const& linha : matriz)//Passando pelas linhas
    {
        for (auto const& coluna : linha)//Passando pelas colunas
        //Utiliza do auto para determinar um tipo baseado no valor passado. Nesse caso foi definido como int pois nosso array é de ints
            cout << coluna << " ";
        cout << endl;
    }
    cout << endl;
    //Esse loop for poderia ser feito assim também:
    array<array<int, linha> , coluna> tabela{};
        for(int i{0}; i < tabela.size(); i++)
        {
            for(int j{0}; j < tabela[i].size(); j++)
                cout << tabela[i] [j] << " ";
            cout << endl;
        }
    cout << endl;
    //Basicamente vc criar um array para suas linhas 'array<int, 3>' e coloca dentro de outro array que será suas colunas.
    //Seus numeros podem ser escritos todos em seguida com cada um preenchendo até o final da linha e depois passando para próxima.
    //Caso não seja especificado o valor ele será entendido como zero igual em matriz [3] [3].

    //Arrays multidimencionais podem ser criados da foram normal do C++ também. Porém, não terá .size() já que esse tipo não possui tal definição.
    //Sua vantagem é a redibilidade de seu tamanho e de seus elementos.
    int arrays[3][3]{{3, 3, 3}, {2, 2, 2}, {1, 1, 1}};
        for(int i{0}; i < 3; i++)
        {
            for(int j{0}; j < 3; j++)
                cout << arrays[i] [j] << " ";
            cout << endl;
        }
    
    return 0;
}
