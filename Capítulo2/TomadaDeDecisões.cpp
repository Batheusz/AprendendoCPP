#include <iostream>

int main()
{
    //Operadores relacionais
    // Maior que ---> x > y;
    // Menor que ---> x < y;
    // Maior ou igual a ---> x >= y;
    // Menor ou igual a ---> x <= y;
    //Operadores de igualdade
    // Igual a ---> x == y;
    // Diferente de ---> x != y;

    //Utilizando comando IF
    int num1, num2;
    std::cout << "Digite seus dois numeros: " << std::endl;
    std::cin >> num1 >> num2;
    if (num1 == num2)
        std::cout << num1 << " Eh igual a " << num2 << std::endl;
    if (num1 != num2)
        std::cout << num1 << " Eh diferente de " << num2 << std::endl;
    if (num1 < num2)
        std::cout << num1 << " Eh menor que " << num2 << std::endl;
    if (num1 > num2)
        std::cout << num1 << " Eh maior que " << num2 << std::endl;
    if (num1 <= num2)
        std::cout << num1 << " Eh menor igual a " << num2 << std::endl;
    if (num1 >= num2)
        std::cout << num1 << " Eh maior igual a " << num2 << std::endl;
    
    //Procedência dos operadores vistos.
    // 1º ---> ()
    // 2º ---> *, /, % Lidos da esquerda para direita.
    // 3º ---> +, - Lidos da esquerda para direita.
    // 4º ---> >> ou << Lidos da esquerda para direita.
    // 5º ---> <, <=, >, >= Lidos da esquerda para direita.
    // 6º ---> ==, != Lidos da esquerda para direita.
    // 7º ---> = Lido da direita para esquerda.
    
    return 0;
}