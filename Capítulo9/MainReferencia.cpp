#include "ReferenciaDadoPrivate.h"
#include <iostream>
using namespace std;

int main()
{
    Time t; // objeto t

    unsigned int& hourRef{t.badSetHour(20)};
    // Foi definido para hour o valor de 20 e retornado sua referência para hourRef.
    cout << "Valor de hour = " << t.getHour() <<  endl;
    // Mostrando que hour é 20
    hourRef = 30; // Modifica o valor de um dado private sem ser parte da classe.
    cout << "Valor de hour depois de modificado = " << t.getHour() << endl; // Mostra que hour foi modificado.

    // Uma referência é tratada como um lvalue(valor com endereço de memória definido), ou seja, podem ser atribuídos valores a ele
    t.badSetHour(12) = 74;
    // Nesse caso é chamada a função para aplicar a hour o valor de 12 e ela retorna o endereço de memória.
    // Logo após isso, é atribuído a esse endereço o valor inválido de 74
    // Criar funções que retornam referências ou ponteiros para dados private quebram o encapsulamento feito nesses dado.
    cout << "Valor de hour depois de modificado novamente = " << t.getHour() << endl; // Mostra que hour foi modificado.

    return 0;
}