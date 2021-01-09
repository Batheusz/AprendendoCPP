#include <iostream>
#include <array>
#include <algorithm> //Para pesquisa linear ou binária
using namespace std;

int main()
{
    //Existem duas formas de se procurar coisas por um arrays, a forma linear e a binária(muitomais rápida, porém mais complexa).
    
    const int tamanho{7};
    bool encontrou;
    array<string, tamanho> cores{"vermelho", "laranja", "amarelo", "verde", "azul", "violeta", "indigo"};

    cout << "Array desorganizado: " << endl;
    for (string i : cores)
    {
        cout << i << " ";
    }   

    //Note que ao se fazer a pesquisa binária com o array desorganizado não será encontrado amarelo, pois oa valores das strings em binário estão bagunçados.
    // encontrou{binary_search(cores.begin(), cores.end(), "amarelo")};
    // cout << "\namarelo" << (encontrou ? " foi" : " nao foi") << " encontrado em cores" << endl;

    
    sort(cores.begin(), cores.end()); //Arruma os elementos de cores em ordem alfabetica ou crescente(depende do tipo da variável).

    cout << "Array organizado: " << endl;
    for (string i : cores)
    {
        cout << i << " ";
    }

    encontrou = binary_search(cores.begin(), cores.end(), "amarelo");
    //Faz a procura de amarelo entre os elementos de cores e armazena o resultado no  bool encontrou.
    //O procurado é convertido para binário e seu valor é encontrado dentro do alcance delimitado no começo da função.
    cout << "\namarelo" << (encontrou ? " foi" : " nao foi") << " encontrado em cores" << endl;
    //Utilizado operador ternário para fazer um if/else
    //Caso a condição seja verdadeira ele retorna o primeiro caso "foi", caso seja falsa retorna o segundo caso "nao foi".

    return 0;
}
