#include <iostream>
using namespace std;

//Definição da classe LivroDeNotas.
class LivroDeNotas
{
public:
    //Função para mostrar uma mensagem de boas vindas.
    //Para criar uma função deve-se especificar o tipo de retorno, seu nome e seus parâmetros.
    //Nesse caso o tipo do retorno é void, ou seja, ela não espera retorno ou o retorno é vazio.
    //E também a função não espera parâmetros.
    void MostrarMensagem()
    {
        cout << "Bem-Vindo ao Livro De Notas" << endl;
    }
};//Fim da classe.

int main()
{
    LivroDeNotas meuLivroDeNotas; //Cria um objeto LivroDeNotas chamado meuLivroDeNotas. (INSTANCIAR)
    meuLivroDeNotas.MostrarMensagem(); //Chama a função MostrarMensagem do objeto.
    return 0;
}