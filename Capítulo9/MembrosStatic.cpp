#include <iostream>
#include "MembrosStatic.h"
using namespace std;

unsigned int Empregado::count{0};

unsigned int Empregado::getCount()
{
    return count;
}

Empregado::Empregado(const string& first, const string& last) : firstName{first}, lastName{last}
{
    ++count;
    cout << "Construtor para o empregado " << getFirstName() << " " << getLastName() << endl;
}

Empregado::~Empregado()
{
    --count;
    cout << "Destrutor para o empregado " << getFirstName() << " " << getLastName() << endl;
}

string Empregado::getFirstName() const
{
    return firstName;
}

string Empregado::getLastName() const
{
    return lastName;
}