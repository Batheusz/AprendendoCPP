#include <iostream>
#include <iomanip> // Para setw e setfill
#include <stdexcept> // Para invalid_argument
#include <sstream> // Para ostringstream
#include "Time.h" // Nossa classe
using namespace std;

Time::Time()// Constroi a classe com tudo zerado.
{
    hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
    if(h >= 0 && m >= 0 && s >= 0 && h < 24 && m < 60 && s < 60)
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
    {
        throw invalid_argument("Hora, minuto e/ou segundo é/são invalido(s)!"); // throw termina a função setTime e o erro é retornado.
    }
}

string Time::printUniversal() const // Formato 24hrs
{
    ostringstream output; // Cria um objeto para armazenar seu output formatado.
    output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
    // Setfill insere 0 as casas vazias de todas as variáveis. Por exemplo, digamos que hour seja 3 será inserido um 0 a esquerda e ficará como 03.
    // Setw insere um espaço de 2 char entre os ":"
    return output.str(); // Converte output para string e retorna.
}

string Time::printStandard() const // Formato 12hrs
{
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? "AM" : "PM") << endl;
    return output.str();
}
// O operador :: amarra a função ao escopo de Time.h, sem esse operador o compilador não reconheceria que essas funções estão ligadas a Time.h
// Além disso, o operador garante acesso a dados private de Time.h, como hour por exemplo. E para obter esses acessos também devemos incluir o header.
