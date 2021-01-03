#include <iostream>

class LivroNotas
{
public:
    LivroNotas(std::string nome) : notaMaxima{0}
    {
        setNome(nome);
    }//Construtor
    void setNome(std::string nome)
    {
        if(nome.length() <= 25)//Se o nome tiver menosde 25 caracteres
            nomeCurso = nome;
        else
        {
            nomeCurso = nome.substr(0, 25);//Pega e armazena somente 25 caracteres contanto da posição 0
            std::cout << "Nome \"" << nome << "\" excedeu o limete de 25 caracteres.\n" << "Reduzindo para 25 caracteres..." << std::endl;
        }
    }//Definir o nome do curso
    std::string getNome()
    {
        return  nomeCurso;
    }//Obter nome do curso
    void mensagem()
    {
        std::cout << "Bem-vindo ao Livro de Notas para \"" << getNome() << "\"" << std::endl;
    }//Mensagem de boas vindas
    void digitarNotas()
    {
        int nota1, nota2, nota3;
        std::cout << "Digite 3 notas inteiras: ";
        std::cin >> nota1 >> nota2 >> nota3;
        notaMaxima = max(nota1, nota2, nota3);
    }//Receber notas
    void relatorio()
    {
        std::cout << "A maior nota digitada eh: " << notaMaxima << std::endl;
    }//Mostar relatório com base nas notas
    int max(int x, int y, int z)
    {
        notaMaxima = x;
        if (y > notaMaxima)
            notaMaxima = y;
        if (z > notaMaxima)
            notaMaxima = z;        
        return notaMaxima;    
    }//Determina o máximo entre 3 valores

private:
    std::string nomeCurso;
    int notaMaxima;

};