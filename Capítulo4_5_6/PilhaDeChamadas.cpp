#include <iostream>
using namespace std;

//Pilha de chamadas é algo análogo a uma pilha de pratos. Quando um prato novo é inserido ou removido, normalmente são da parte superior.
//A medida que uma função é chamada ela pode chamar outras funções, ou seja, adicionar mais um prato a pilha, isso é chamado de stack frame ou quadro de pilha.
//Além disso, as variáveis da função chamada precisam "desaparecer" após retornarem seus valores. O stack frame da função(prato) é responsável por armazenar suas variáveis automáticas.
//Então, após as função retornar e o prato ser removido da pilha essas variáveis não são mais reconhecidas pelo programa.
//Como a memória de um computador é algo finito existe um limite para o tamanho da pilha, caso exista mais stacks frames do que a pilha suporte ocorrerá um stack overflow ou estouro de pilha.

int quadrado(int);

int main()
{
    int a = 10;
    cout << a << "ao quadrado eh " << quadrado(a) << endl;
}

int quadrado(int x)
{
    return x * x;
}
//Nesse exemplo o sistema operacional invoca main para realizar sua execução.
//Então main obtém sua stack frame que recebe o endereço para onde dever retornar(sistema operacional) e sua variável a.
//Após isso main invoca quadrado.
//Assim a stack frame de quadrado é colocada no topo da pilha e para ela também e direcionado o endereço de retorno(main) e armazenado x.
//Quadrado realiza suas instruções e retorna para main o valor, então sua stack frame é removida da pilha.
//Main realiza suas intruçoes e retorna para o sistema operacional, então sua stack também é removida da pilha. 
