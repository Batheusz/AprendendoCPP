#ifndef HEADERDECLASSE_H //Se o header não estiver definido ele irá realizar o código, caso já esteja não será implementado nada.
#define HEADERDECLASSE_H
#include <iostream>

class Conta 
{
public:
    Conta(std::string nomeDaConta, int saldo) : nome{nomeDaConta}
    {
        if(saldo > 0)
            valor = saldo;
    }

    void deposito(int valorDeposito)
    {
        if(valorDeposito > 0)
        valor = valor + valorDeposito;
    }

    int getSaldo() const
    {
        return valor;
    }

    void setNome(std::string nomeDaConta)
    {
        nome = nomeDaConta;
    }

    std::string getNome() const
    {
        return nome;
    }

private:
    std::string nome;
    int valor {0};
};
#endif