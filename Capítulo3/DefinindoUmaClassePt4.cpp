#include <iostream>
#include <string>
using namespace std;

class LivroDeNotas
{
public:
    //Cria-se um construtor para inicar o objeto com uma forma já definida.
    //Por padrão o C++ chama sempre um construtor padrão quando a classe não possui seu específico.
    LivroDeNotas(string curso) : nomeCurso{curso}
    //Por convenção o construtor recebe o mesmo nome da sua classe. Além disso, não se deve informar o tipo para o construtor.
    //Um construtor pode receber a inicialização dos seus membro por uma separação por ": variável{valor}". Essa operação pode ser realizada no corpo, porém é menos eficiente.
    //Construtores podem receber parâmetros ou não.
    {
        //Corpo vazio.
    }

    void setarNomeDoCurso(string nome)
    {
        nomeCurso = nome;
    }
    
    string obterNomeCurso() const //Ao se aplicar const apos o parâmetro é indicado que essa função não deve poder modificar o objeto que está inserida.
    //Caso ocorra de modificar será retornado um erro de compilação imediato. Tente aplica-lo no setarNomeDoCurso().
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
//UML: https://prnt.sc/weaelz
int main()
{
    LivroDeNotas meuLivro("Engenharia Mecatronica");//Crio um objeto da classe livro de notas que recebe como argumento para o construtor o nome do curso.
    //Repare que se a partir da definição do construtor for utilizado a forma padrão de definir um objeto será obtido um erro, pois não existe mais seu construtor padrão.
    //LivroDeNotas meuLivro2;
    cout  << meuLivro.obterNomeCurso() << endl;
    return 0;
}
