#include <iostream>
#include <string>
using namespace std;

class LivroDeNotas
{
public:
    void MostrarMensagem(string nomeDoCurso)//Repare que foi utilizado um parâmetro que a função deve receber para executar.
    //Funções podem requisitar vários parâmetros para sua execução. Assim, sua separação será sempre feita por vírgulas.
    {
        cout << "\nBem-Vindo ao Livro De Notas para \"" << nomeDoCurso << "\"" << endl;
    }
};

int main()
{
    //Cria-se uma string para armazenar o nome do curso
    //strings são variáveis do tipo texto, diferentemente de int que são inteiros ou char que são caracteres.
    string nomeDoCurso;
    cout << "Digite o nome do curso: ";
    //cin >> nomeDoCurso; se utilizarmos o método padrão de receber dados será lido somente até o espaço.
    //Para isso utilizamos o comando getline para armazernar a linha inteira.
    getline(cin,nomeDoCurso);//getline necessita que seja informado de onde vem a mensagem(cin) e onde será armazenada(nomeDoCurso).
    LivroDeNotas meuLivroDeNotas; 
    meuLivroDeNotas.MostrarMensagem(nomeDoCurso);//Repare que foi passado um argumento para o parâmetro da função MostrarMensagem.
    //Argumentos são os valores dados a um parâmetro para que a função possa ser executada.
    return 0;
}