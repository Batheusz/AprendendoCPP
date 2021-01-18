#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
public:
    Time(int hr = 0, int  min = 0, int sec = 0)
    {
        setTime(hr, min, sec);
    }

    // Função set retornando Time&
    Time& setTime(int h, int m, int s)
    {
        setHour(h);
        setMinute(m);
        setSecond(s);
        return *this;
    }
    Time& setHour(int h)
    {
        hour = (h >= 0 && h < 24) ? h : 0;
        return *this;
    }
    Time& setMinute(int m)
    {
        minute = (m >= 0 && m < 60) ? m : 0;
        return *this;
    }
    Time& setSecond(int s)
    {
        second = (s >= 0 && s < 60) ? s : 0;
        return *this;
    }

    // Função get
    int getHour() const
    {
        return hour;
    }
    int getMinute() const
    {
        return minute;
    }
    int getSecond() const
    {
        return second;
    }

    void print() const
    {
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
    }
private:
    int hour, minute, second;
};

int main()
{
    Time t;
    t.setHour(10).setMinute(15).setSecond(45); // Efeito cascata de funções-membro
    // O operador "." lê da esquerda para direita, assim, a primeira intrução lida seria t.setHour(10)
    // A função é chamada e retorna para t uma referência atualizada para o objeto t.
    // Basicamente é como se "t.setHour(10)" após executar transforma-se em t e então o código fica
    // t.setMinute(15).setSecond(45);
    // E todo procedimento ocorre novamente.
    t.print();
}