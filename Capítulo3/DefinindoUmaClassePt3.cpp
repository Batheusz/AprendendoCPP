#include <iostream>
#include <string>
using  namespace std;

class LivroDeNotas
{
public://Área publica da classe. Tudo aqui contido pode ser utilizado em qualquer parte do código.

    void setarNomeDoCurso(string nome)//Função para salvar o nome do curso.
    {
        nomeCurso = nome;//Armazena o nome dado na string nomeCurso.
    }

    string obterNomeCurso()//Função para obter o nome do curso.
    {
        return nomeCurso;//retorno o nome salvo em nomeCurso.
    }

    void mostrarMensagem()
    {
        cout << "Bem-vindo ao Livro de Notas para \"" << obterNomeCurso() << "\"" << endl;
    }
private://Área privada da classe. Somente a classe atual posssui acesso as informações.
    string nomeCurso;
};
// UML https://prnt.sc/wdpt0d
int main()
{
    string curso;
    LivroDeNotas meuLivro;
    cout << "Curso atual eh: " << meuLivro.obterNomeCurso() << endl;//Variável para o nome do curso está vazia.
    cout << "Digite o nome do curso: ";
    getline(cin,curso);
    meuLivro.setarNomeDoCurso(curso);//Seta o nome do curso para o lido no teclado.
    meuLivro.mostrarMensagem();
    return 0;
}