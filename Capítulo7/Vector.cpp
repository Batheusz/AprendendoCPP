#include <iostream>
#include <vector>
using namespace std;

//Vector vs Array
//Vector é um armazenamento sequencial de elementos sem ser baseado em endereços de memória. Já Array é uma sequencia de mesmo tipo baseada em endereço de memória.
//Array é de tamanho fixo e vector é dinâmico.
//Vector ocupa mais memória e demora mais para acessar seus elementos.
//Se comparar vector com array padrão do C(tipo nome[]) vector são muito mais seguros e possuem métodos para trabalhar com.
//Mas se comparar com array da library array essas vantagens somem.

void escrever(vector<int>&);
void ler(const vector<int>&);

int main()
{
    vector <int> valor1(3); //Vector de 3 elementos do tipo int
    vector <int> valor2(5); //Vector de 5 elementos do tipo int

    cout << "Tamanho de vector1 eh: " << valor1.size() << endl;//Possui métodos para trabalhar.
    cout << "Tamanho de vector2 eh: " << valor2.size() << endl;
    cout << "Tamanho de vector1 eh: " << valor1.size() << endl;//Possui métodos para trabalhar.


    //podemos comparar diretamente vectors
    if(valor1 != valor2)
        cout << "V1 e V2 Nao sao iguais!!!" << endl;
    cout << "Escreva elementos de vector1: ";
    escrever(valor1);//Caso tente escrever mais números doq o tamanho esses ficarão no buffer.
    fflush(stdin);//Limpa o buffer para a próxima execução.
    vector<int> valor3{valor1};//Cria um vetor com os valores de outro.
    valor1.push_back(4);//Adiciona 4 ao ultimo elemento do vector valor1    
    ler(valor1);
    ler(valor3);

    cout << "Escreva elementos de vector2: ";
    escrever(valor2);
    fflush(stdin);
    ler(valor2);

    cout << "Seu novo valor de vector2 eh:" << endl;
    valor2 = valor1; //É possível igualar vectors
    ler(valor2);
    if(valor1 == valor2)
        cout << "V1 e V2 Sao iguais!!!" << endl;
    
    valor1[0] = 15;//Atribuindo valor a elementos.
    cout << "Primeiro elemento de valor1 = " << valor1[0] << endl; //Mostrando elemento separado.

    return 0;
}

void ler(const vector<int>& vetor)
{
    for(int i : vetor)
    {
        cout << i << " ";
    }
    cout << endl;
}

void escrever(vector<int>& vetor)
{
    for(int& i : vetor) //Passado o endereço de i para ser possível a modificação.
        cin >> i;
}