#include <iostream>
#include <string>
using namespace std;

class LivroDeNotas
{
public:
    //Cria-se um construtor para inicar o objeto com uma forma já definida.
    //
    LivroDeNotas(string curso)
    //Por convenção o construtor recebe o mesmo nome da sua classe. Além disso, não se deve informar o tipo para o construtor.
    //Construtores podem receber parâmetros ou não.
    {
        setarNomeDoCurso(curso);
    }

    void setarNomeDoCurso(string nome)
    {
        nomeCurso = nome;
    }
    
    string obterNomeCurso()
    {
        return nomeCurso;
    }

    void mostrarMensagem()
    {
        cout << "Bem-vindo ao Livro de Notas para \"" << obterNomeCurso() << "\"" << endl;
    }
private:
    string nomeCurso;
};

int main()
{
    LivroDeNotas meuLivro("Engenharia Mecatronica");//Crio um objeto da classe livro de notas que recebe como argumento para o construtor o nome do curso.
    //Repare que se a partir da definição do construtor for utilizado a forma padrão de definir um objeto será obtido um erro.
    //LivroDeNotas meuLivro2;
    cout  << meuLivro.obterNomeCurso() << endl;
    return 0;
}
