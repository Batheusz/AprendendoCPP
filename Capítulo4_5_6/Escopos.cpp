#include <iostream>
using namespace std;

int global{0};

int main()
{
    int local{0};
    cout << local << " Valor no escopo de main()" << endl;
    {
        int local = 2;
        cout << local << " Valor no escopo interno de main()" << endl;
        //Cria uma variável para esse escopo com o mesmo de escopo externo, porém ela é ignorada pelo escopo externo.
    }

    cout << local << " Valor no escopo de main()" << endl;
    global = 2;//Note que se pode chamar global pois seu escopo/área de atuação é do tipo de escopo de arquivo, ou seja, será conhecida por todo o arquivo.
}

// local = 2; Repare que essa definição gerará um erro pois local possui um escopo de bloco, ou seja, será conhecida somente no bloco {} onde foi declarada.