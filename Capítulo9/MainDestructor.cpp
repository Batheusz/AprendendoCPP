#include "Destructors.cpp"
#include <iostream>
using namespace std;

void funcao();

ConstructorAndDestructor global (1, "global primeiro");// Objeto global.

int main()
{
    cout << "Comeco de main()" << endl;
    ConstructorAndDestructor localAut(2, "local automatico de main");
    static ConstructorAndDestructor localStatic(3, "local static de main");
    funcao();
    cout << "Volta para main()" << endl;
    ConstructorAndDestructor localAut2(4, "local automatico de main");
    cout << "Fim de main()" << endl;
    return 0;
}

void funcao()
{
    cout << "Comeco de funcao()" << endl;
    ConstructorAndDestructor localAutFun(5, "local automatico de funcao");
    static ConstructorAndDestructor localStaticFun(6, "local static de funcao");
    ConstructorAndDestructor localAutFun2(7, "local automatico de funcao");
    cout << "Fim de funcao()" << endl;
}