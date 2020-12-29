#include <iostream>

int main()
{
    int num1; //Somente inicializa a variável.
    int num2{0}; //Inicializa a variável com 0.
    int soma{0};

    //Leitura da variável.
    std::cout << "Digite seu primeiro numero: "; //Leitura.
    std::cin >> num1; //Atribuição da leitura.

    std::cout << "Digite seu segundo numero: "; //Leitura.
    std::cin >> num2; //Atribuição da leitura.

    soma = num1 + num2;
    std::cout << "Sua soma eh: " << soma << std::endl;
    return 0;
}