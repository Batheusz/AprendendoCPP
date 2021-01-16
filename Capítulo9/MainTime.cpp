#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main()
{
    Time MyTime;
    cout << "Tempo inicial:\n" << MyTime.printUniversal() << MyTime.printStandard();
    MyTime.setTime(15, 45, 54);
    cout << "Tempo :\n" << MyTime.printUniversal() << MyTime.printStandard();

    // Podemos utilizar "." para fazer acesso aos membros de um objeto, porém também podemos utilizar de ponteiros para fazer referência.
    Time time;
    Time& timeRef{time}; // timeRef é um referência da classe Time inicializado com o valor de time;
    Time *timePtr{&time}; // timePtr é um ponteiro que aponta para o objeto time da classe Time
    time.setTime(1,1,1);
    timeRef.setTime(2,2,2);
    timePtr->setTime(3,3,3); // Ao se utilizar de ponteiros para  se referir a um objeto deve ser utilizado o operador "->".
    cout << time.printUniversal();


    MyTime.setTime(26, 60, 54);// Causará a execução do throw e exibirá nossa mensagem de erro.
    cout << "Tempo :\n" << MyTime.printUniversal() << MyTime.printStandard();
}
// g++ -o Time Time.cpp MainTime.cpp use esse comando para executar a compilação correta
