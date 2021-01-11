#include <iostream>
using namespace std;

void cuboPorReferenciaPtr(int *);
void cuboPorReferencia(int&);

int main()
{
    //Agora existem três maneiras de passar argumentos para uma função: Por valor, por referência com argumentos de referência e por referência com argumentos de ponteiro.
    int numero1{3}, numero2{2};
    cout << "numero1 = " << numero1 << endl;
    cout << "numero2 = " << numero2 << endl;

    cuboPorReferenciaPtr(&numero1);//Passa o endereço de memória de numero. Pode ser usado &variavel ou passado um ponteiro.
    /* Passando por ponteiro
        int *num1Ptr = &numero1;
        cuboPorReferenciaPtr(num1Ptr);
       Porém essa operação não faz tanto sentido já que a função cria automaticamente um ponnteiro para o endereço do argumento.
       Basicamente estará apontando um ponteiro para outro ponteiro. Veja uma imagem explicando a função.
       https://prnt.sc/wl5xmi
    */
    cuboPorReferencia(numero2);//Passa a variável que será tomada como referência.

    cout << "numero1 cubo = " << numero1 << endl;
    cout << "numero2 cubo = " << numero2 << endl;

}

void cuboPorReferenciaPtr(int *ptr)//Espera um endereço de memória como argumento.
{
    *ptr = *ptr * *ptr * *ptr;
}

void cuboPorReferencia(int& num)
{
    num = num * num * num;
}