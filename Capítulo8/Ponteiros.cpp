#include <iostream>
using namespace std;

int main()
{
    //Variáveis ponteiro possuem endereço de memória como seu valor, ele "aponta" para o endereço.
    //https://prnt.sc/wl30s7.

    int *xPtr{nullptr}, x{3};//Cria o ponteiro de x e x
    //Todo ponteiro deve possuir um * em sua declaração, normalmente seus nomes é o nome da variável que apontará e em seguida a abreviação de Ponteiro(Ptr)
    //Ponteiros normalmente devem ser iniciados como ponteiros nulos, ou seja, que não apontam para nenhuma direção. 
    //Para isso que é usado nullptr, ele atribui o valor 0 ao ponteiro(único valor que não é realizado um casting de int para ponteiro)

    xPtr = &x;//Atribui o endereço de memória de x para o ponteiro.
    cout << "Endereco do ponteiro: " << xPtr << "\nValor do ponteiro: " << *xPtr << endl;
    //O operador & é responsável por pegar o endereço de memória.
    //Ele não é o mesmo operador que utilizamos para passar variáveis por referência, pois aquele é sempre precedido de um tipo de dado(int, double, etc.).
    //O operador * é responsável por desreferenciar um ponteiro, isso retorna um alias do objeto que está sendo apontado.
    //Quando o endereçode uma variável for passado para uma função o * pode ser utilizado para modificar ser valor.

    cout << "&*xPtr = " << &*xPtr << endl;
    cout << "*&xPtr = " << *&xPtr << endl;
    //Os operadores * e & são opostos, ou seja, quando utilizados juntos não surgem nenhum efeito.
    //Nesse caso é a mesma coisa que cout << "&*xPtr = " << xPtr << endl;
}