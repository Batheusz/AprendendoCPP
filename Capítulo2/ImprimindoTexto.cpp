#include <iostream>

int main()
{
    //Imprimindo 1 linha com 1 instrução.
    std::cout << "Hello World!!\n";
    //Imprimindo 1 linha com várias instruções.
    std::cout <<"Ola ";
    std::cout <<"Mundo!!\n";
    //Imprimindo várias linhas com uma instrução.
    std::cout <<"Primeira Linha\nSegunda Linha\n";

    return 0;
}
/*Escapes Sequences que podem ser utilizadas ao imprimir na tela.
    \n ---> Nova linha. Posiciona o cursor no começo da próxima linha.
    \t ---> Tabulação. Move o cursor para proóxima tabulação.
    \r ---> Retorno. Posiciona o cursor no começo da linha atual.
    \a ---> Alerta. Adiciona aviso sonoro do sistema.
    \\ ---> Barras invertidas. Utilizadas para imprimir "\".
    \' ---> Aspas simples. Utilizadas para imprimir '.
    \" ---> Aspas duplas. Utilizadas para imprimir ".
*/