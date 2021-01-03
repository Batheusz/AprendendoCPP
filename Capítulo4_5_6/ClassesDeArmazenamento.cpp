#include <iostream>
using namespace std;

void automatica();
void estatica();

int main()
{
    //Classe de armazenamento define quanto tempo esse valor existirá na memória.

    //Classe de armazenamento automática utilizam de auto e register para serem declaradas.
    //Existem enquanto o programa estiver no bloco onde são definidas.
    //Por padrão as variáveis são automática, difícilmente será encontrado a definição auto.
    //Variáveis register são guardadas em registros de hardwares mais potentes. Assim, seu acesso é mais rápido.

    //Classe de armazenamento estática utilizam extern e static para serem declaradas.
    //Existem desde a execução até o fim do programa.

    automatica();//É para mostrar que 2 * 4 = 8
    estatica();//Também retorna que 2 * 4 = 8
    automatica();//Retornará os mesmos valores pois suas variáveis foram destruidas e reconstruidas já que são do tipo automáticas.
    estatica();//Por a variável x ser static ela não foi destruida apos o encarramento da função, assim, seu valor será de 4 ao inicar novamente, causando 4 * 4 = 16
    
    return 0;
}


void automatica()
{
    int x{2}, y{4}, mult;
    mult = x * y;
    cout << x << " * " << y << " = " << mult << endl;
    x += 2; // x = x + 2

}

void estatica()
{
    static int x{2};
    int y{4}, mult;
    mult = x * y;
    cout << x << " * " << y << " = " << mult << endl;
    x += 2; // x = x + 2
}