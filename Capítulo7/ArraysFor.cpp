#include <iostream>
#include <array>
using namespace std;

int main()
{
    //Existe uma outra forma de mostrar os elementos de um array usando de for.
    //A que foi utilizada anteriormente era com a declaração padrão de um for. for(contador; condição; incremento)
    array<int, 10> numeros{1,2,3,4,5,6,7,8,9,10};
    for( int i : numeros)
    //for(variável do mesmo tipo do array/lista de elementos : arrays/lista de elementos).
    //A variável irá percorrer toda a lista e executar os comandos do bloco.
    {
        cout << i << " ";
    }
    //Sempre que vc precisar utilizar o numero de elemento do array para algo no seu código é recomendado o uso de um for com contador ao invés desse baseado no alcance.
    return 0;
}