#include <iostream>
#include "Destructors.h"
using namespace std;

// Destructor é um método/função-membro especial. Ele é declarado usando ~NomeDaClasse.
// Destructor de uma classe é chamado implicitamente quando um objeto é destruído.
    // Por exemplo, um objeto automático é destruído quando o programa deixa seu escopo, o destructor não libera a memória do objeto, mas faz a faxina de terminação
    // Assim a memória pode ser reivindicada pelo sistema e reutilizada para outro objeto.
// Destructors não recebem parâmetros e nem retornam valores e uma classe pode ter somente um Destructor, sua sobrecarga não é permitida.
// A função exit faz com q o programa encerre sem chamar os destructor para objetos automáticos. A função abort faz a mesma coisa, mas nenhum objeto chama seu destructor.

ConstructorAndDestructor::ConstructorAndDestructor(int ID, string  msg)
{
    objectID = ID;
    message = msg;
    cout << "Objeto" << objectID << " mensagem construido " << message << endl;
}

ConstructorAndDestructor::~ConstructorAndDestructor()
{
    cout << "Objeto" << objectID << " mensagem destruido " << message<< endl;
}