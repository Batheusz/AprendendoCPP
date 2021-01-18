#include <iostream>
using namespace std;

// Cada objeto sabe seu própio endereço de memória usando o ponteiro "this".
// O ponteiro this não faz parte do objeto em si, ou seja, fazer sizeof do objeto não incluirá o tamanho de this.

class Test
{
public:
    Test( int = 0);
    void print() const;
private:
    int x;
};

Test::Test(int value) : x{value}
{

}

void Test::print() const
{
    // Utiliza this implicitamentes para acessar x
    cout << "X = " << x << endl;
    // Utiliza this explicitamente para acessar x
    // Utiliza operador ->
    cout << "this->x = " << this->x << endl;
    // Utiliza this desreferenciado e operador "."
    cout <<"(*this).x = " << (*this).x << endl; // escreve-se (*this) pois o ponto possui preferência sobre os parentêses
}

int main()
{
    Test objeto(12);
    objeto.print();
    return 0;
}