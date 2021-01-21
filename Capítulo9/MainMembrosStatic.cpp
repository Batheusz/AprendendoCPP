#include <iostream>
#include "MembrosStatic.h"
using namespace std;

int main()
{
    cout << "Numero atual de empregados eh: " << Empregado::getCount() << endl;
    Empregado e1{"Alberto", "Silva"};
    {
        Empregado e2{"Jonas","Oliveira"};
        Empregado e3{"Marcos","Dos Santos"};
        cout << "Numero atual de empregados eh: " << Empregado::getCount() << endl;
    }
    cout << "Numero atual de empregados eh: " << Empregado::getCount() << endl;
}