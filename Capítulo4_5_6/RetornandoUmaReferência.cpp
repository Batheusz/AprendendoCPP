#include <iostream>
using namespace std;
int referencia(int &);

//As funções podem retornar referências, porém pode ser arriscado.
//Ao se retonar uma referência a variável dever ser static, pois se for uma automática será destruida após o termino da função.
//Irá surgir um erro de variável indefinida e o comportamento do programa se torna imprevisível.

int main()
{
    //Exemplo de alias/apelido.

    int x = 3;
    int &valor = x;

    cout << "X eh: " << x << " Valor eh: " << valor << endl;

    valor = 4;//Ao modificar valor, x também é alterado.
    cout << "X eh: " << x << " Valor eh: " << valor << endl;

    //Note que foi possível retornar a referencia a x, pois essa variável já existia nesse escopo, caso contrário resultaria num erro.
    referencia(x);
    cout << "X eh: " << x << " Valor eh: " << valor << endl;

    return 0;
}

int referencia(int &x)
{
    x += 2;
    return x;
}