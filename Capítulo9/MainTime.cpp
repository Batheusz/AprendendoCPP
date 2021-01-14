#include <iostream>
#include <stdexcept>
#include "Time.cpp"
using namespace std;

int main()
{
    Time MyTime;
    cout << "Tempo inicial:\n" << MyTime.printUniversal() << MyTime.printStandard();
    MyTime.setTime(15, 45, 54);
    cout << "Tempo :\n" << MyTime.printUniversal() << MyTime.printStandard();
    MyTime.setTime(26, 60, 54);// Causará a execução do throw e exibirá nossa mensagem de erro.
    cout << "Tempo :\n" << MyTime.printUniversal() << MyTime.printStandard();

}