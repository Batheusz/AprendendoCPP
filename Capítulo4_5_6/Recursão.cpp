#include <iostream>
using namespace std;

//Uma função recursiva é aquela que chama a si mesma direta ou inderetamente(por outra função).
//Caso seja chamada pra resolver algo complexo ela dividirá em duas partes, uma que sabe resolver o outra que não sabe.
//Para que a recursão seja plausível essa parte que não sabe resolver deve parecer com o problema original, mas ser ligeiramente mais simples.
//Como esse novo problema é parecido com o original a função chama uma nova cópia dela para resolve-lo, isso é referido como chamada recursiva.
//A recusão só termina quando a função parar de dividir em duas partes, ou seja, ter somente coisas que sabe resolver.
//Cuidado com a resursão, pois geralmente levam mais tempo e consomem mais memória.

unsigned long int fatorar (unsigned long int);

int main()
{
    //Fatorial iterativo
    int fatorial{1};
    //O laço for irá realizar o fatorial de 5.
    for(unsigned int contador{5}; contador >= 1; --contador)
    {
        fatorial *= contador;
    }
    cout << "Fatorial de 5 eh: " << fatorial << endl;

    //Fatorial recursivo
    //https://prnt.sc/wii7oh
    cout << "Fatorial de 5 eh: " << fatorar(5) << endl;
    //Fatorar receberá 5 e perceberá que não pode fazer nada.
    //Então chamará fatorar(4), que também não poderá fazer nada.
    //Só quando chegar no fatorar(1) que irá cair no if e retornará "1" para sua chamadora fatorar(2)
    //Fatorar(2) fará 2 * 1 e retornará 2.
    //Assim até chegar em fatorar(5) novamente e ela retornar o resultado para main.

    return 0;
}

unsigned long int fatorar(unsigned long int n)
{
    if (n <= 1 && n >= 0)
        return 1; // 0! e 1! são 1.
    else
        return n * fatorar(n - 1);//recursão criada.        
    
}