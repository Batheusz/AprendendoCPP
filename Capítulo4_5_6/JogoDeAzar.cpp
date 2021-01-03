#include <iostream>
#include <cstdlib> //funções de randomização.
#include <ctime>//função de tempo.
using namespace std;
int rolarDado();//função para rolar os dados.

int main()
{   
    //Crio um tipo Status para fornercer informações do jogo
    enum Status {CONTINUE, GANHOU, PERDEU};

    int pontos;//Variável para obter meus pontos.
    Status statusJogo;//Variável para obter o status. Pode conter os tipos do enum Status.
    srand(time(0));
    //Utiliza a hora atual para gerar um valor para a seed de srand, pois ao utilizar rand() é criada uma falsa aleatoriedade.
    //rand() reutiliza os numeros cada vez que o código é executado novamente.
    int rolagem = rolarDado();//rola os dados a primeira vez.

    switch (rolagem)
    {
    case 7:
    case 11:
        statusJogo = GANHOU;
        cout << "Parabens voce ganhou!!"<< endl;
    break;

    case 2:
    case 3:
    case 12:
        statusJogo = PERDEU;
        cout << "Que pena voce perdeu!"<< endl;
    break;

    default:
    statusJogo = CONTINUE;
    pontos = rolagem;
    cout << "Seus pontos sao: " << pontos << endl;
    }

    while (statusJogo == CONTINUE)
    {
        rolagem = rolarDado();

        if(rolagem == pontos)
        {
            statusJogo = GANHOU;
            cout << "Parabens voce ganhou!!"<< endl;
        }
        else if(rolagem == 7)
        {
            statusJogo = PERDEU;
            cout << "Que pena voce perdeu!"<< endl;
        }
    }
    return 0;
}

int rolarDado()
{
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;

    int soma = dado1 + dado2;

    cout << "A rolagem gerou: " << dado1 << " + " << dado2 << " = " << soma << endl;

    return soma;
}