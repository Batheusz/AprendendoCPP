#include <iostream>
#include "HeaderDeClasse.h" //Adicionado a nossa "biblioteca"/header.
using namespace std;

int main()
{
    Conta conta1("Matheus", 50);
    Conta conta2("Antonio", -6);

    //Note que conta não iniciam negativas por causa de nosso filtro no construtor.
    //Também não podem ser realizados depositos negativos por causa de nosso filtro na função.
    cout << "Conta 1: " << conta1.getNome() << " 15tem saldo de: " << conta1.getSaldo();
    cout << "\nConta 2: " << conta2.getNome() << " tem saldo de: " << conta2.getSaldo();

    cout << "\nDigite quanto deseja depositar an conta 1: ";
    int deposito {0};
    cin >> deposito;
    conta1.deposito(deposito);

    cout << "\nDigite quanto deseja depositar an conta 2: ";
    cin >> deposito;
    conta2.deposito(deposito);

    cout << "Conta 1:" << conta1.getNome() << "tem saldo de: " << conta1.getSaldo();
    cout << "\nConta 2:" << conta2.getNome() << "tem saldo de: " << conta2.getSaldo();
    return 0;
}