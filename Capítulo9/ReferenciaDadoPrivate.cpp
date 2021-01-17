#include "ReferenciaDadoPrivate.h"
#include <stdexcept>
using namespace std;
void Time::setTime(int h, int m , int s)
{
    if((h >=0 && h < 24) && (m >=0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
    {
        throw invalid_argument("HORA, MINUTO E/OU SEGUNDO ESTA FORA DO PADRAO!!!");
    }
}

int Time::getHour() const
{
    return hour;
}
// É uma prática ruim retornar uma referência a um dado privado
unsigned int& Time::badSetHour(int h)
{
    if(h >=0 && h < 24)
        hour = h;
    else
        throw invalid_argument("Hora deve estar entre 0-23!!");   
    return hour;
}