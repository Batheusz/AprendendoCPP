#include <iostream>
using namespace std;

//C++ permite que funções contenham o mesmo nome, desde que seus parâmetros sejam diferentes.
int somar(int, int);
float somar(float, float);

int main()
{
    int x{2}, y{4};
    float a{2.1}, b{4.2};
    cout << somar(x, y) << endl;//Chama a função com parâmetros int
    cout << somar(a, b) << endl;//Chama a função com parâmetros float
    
    return 0;
}

int somar(int x, int y)
{
    return x + y;
}

float somar(float x, float y)
{
    return x + y;
}