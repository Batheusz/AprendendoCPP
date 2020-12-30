#include <iostream>
using namespace std;

//Definição da classe LivroDeNotas.
class LivroDeNotas
{
public:
    //Função para mostrar uma mensagem de boas vindas.
    void MostrarMensagem()
    {
        cout << "Bem-Vindo ao Livro De Notas" << endl;
    }
};//Fim da classe.

int main()
{
    LivroDeNotas meuLivroDeNotas; //Cria um objeto LivroDeNotas chamado meuLivroDeNotas.
    meuLivroDeNotas.MostrarMensagem(); //Chama a função MostrarMensagem do objeto.
    return 0;
}