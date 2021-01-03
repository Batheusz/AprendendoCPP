#include "LivroNotas.h"

int main()
{
    LivroNotas meuLivro("Engenharia Mecatronica");
    
    meuLivro.mensagem();
    meuLivro.digitarNotas();
    meuLivro.relatorio();
   
    return 0;
}