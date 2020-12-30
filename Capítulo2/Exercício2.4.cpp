#include <iostream>
using namespace std;

int main()
{
    //Exercício 2.4)A
    int num1, num2, num3;
    cout << "Digite seus tres numeros: ";
    cin >> num1 >> num2 >> num3;
    cout << num1 * num2 * num3;
    //Exercício 2.4)B
    int x {0};
    int y {0};
    int z {0};
    int resultado {0};
    //Exercício 2.4)D
    cout << "Digite tres numeros: ";
    cin >> x >> y >> z;
    //Exercício 2.4)E
    resultado = x * y * z;
    //Exercício 2.4)F
    cout << "O produto eh ";
    cin >> resultado;
    
    return 0;
}