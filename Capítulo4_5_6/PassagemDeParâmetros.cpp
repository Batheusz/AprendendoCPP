#include <iostream>
using namespace std;
int quadradoPorValor(int num);
void quadradoPorReferencia(int &num);
//No C++ existe duas formas de passar parâmetros para uma função.
//Por referência e por valor. Até agora foram só realizadas passagem por valor.

//Passagem por referência:
//Fornece à função chamada a capacidade de acessar os dados do chamador e modificar.
//Oferece um desempenho melhor que passagem por valor, porém a segurança é diminuida já que os dados podem corromper.
//Para melhorar a segurança ao passar por referência utilize do const para evitar modificações e ganhar o desempenho.
//Um parâmetro de referência é o "alias"
//Para indicar que o parâmetro é uma referência coloque um '&' depois do tipo do parâmetro.
    // int &count. "count é uma referência para um int".
//Logo, mencionar a variável no corpo da função por seu nome de parâmetro na realidade referencia a variável original da função chamadora.

int main()
{
    int x{2}, y{4};

    //Passando por valor
    cout << x << " ao quadrado eh: " << quadradoPorValor(x) << endl;
    cout << y << " ao quadrado eh: " << quadradoPorValor(y) << endl;
    cout << "x eh: " << x << " y eh: " << y << endl;

    //Passando por referência
    quadradoPorReferencia(x);
    quadradoPorReferencia(y);
    cout << "x eh: " << x << " y eh: " << y << endl;//Seus valores são modificados e agora serão 4 e 16.

}
//Cria uma cópia de num e retorna o valor da cópia.
int quadradoPorValor(int num)
{
    return num * num;
}

//Multiplica num por si mesmo e armazena na variável referência o valor.
void quadradoPorReferencia(int &num)
{
    num *= num;
}