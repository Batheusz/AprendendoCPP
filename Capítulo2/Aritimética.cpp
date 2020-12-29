#include <iostream>

int main()
{
    //Adição ---> +
    //Subtração ---> -
    //Multiplicação ---> *
    //Divisão ---> /
    //Resto ---> %

    int num1 = 3, num2 = 2, soma, sub, mult, div, resto;
    soma = num1 + num2;//soma = 3 + 2 = 5
    sub = num1 - num2;// sub = 3 - 2 = 1
    mult = num1 * num2;// mult = 3 * 2 = 6
    div = num1 / num2;// div = 3 / 2 = 1 como é uma divisão de dois inteiros será retornado um inteiro.
    resto = num1 % num2;//resto = 3 resto de 2 = 1 
    std::cout << "Soma: " << soma << "\nSub: " << sub << "\nMult: " << mult << "\nDiv: " << div << "\nResto: " << resto << std::endl;

    //Expressões

    int x = 3 * 2 + 3; 
    //O computador irá interpretar como (3 * 2) + 2
    //Os operadores respeitam uma regras de precedência. Caso ocorra de ter vários operadores da mesma precedência os da esquerda terão prioridade.
    // 1º ---> ()
    // 2º ---> *, /, %
    // 3º ---> +, -
        // y = ax² + bx + c com a = 2 , x = 5, b = 3, c = 7;
        // y = ((2 * 5) * 5) + (3 * 5) + 7;
            //1º 2*5 = 10; 2º 10 * 5 = 50; 3º 3 * 5 = 15; 4º 50 + 15 = 65; 5º 65 + 7 = 72; 6º y = 72;
}