#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int tamanho = 11;
    array<int, tamanho> notas = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};
    
    for(int i = 0 ; i <tamanho; i++)
    {
        if (i == 0)
            cout << " 0- 9: ";
        else if (i == 10)
            cout << "  100: ";
        else
            cout << i * 10 << "-" << i * 10 + 9 << ": ";            
        
        for(int estrelas = 0; estrelas < notas[i]; estrelas++)
        {   
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}