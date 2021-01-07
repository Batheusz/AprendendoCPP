#include <iostream>
using namespace std;

//É possível declarar variáveis locais e globais do mesmo nome utilizando "::".

int numero{2};

int main()
{
    double numero{5.1};
    
    cout << numero << endl;
    cout << ::numero << endl;
    
    return 0;
}