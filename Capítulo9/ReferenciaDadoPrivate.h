#ifndef REFERENCIA_H
#define REFERENCIA_H

class Time
{
public:
    void setTime(int, int, int);
    int getHour() const;
    unsigned int& badSetHour(int);// Retorno perigoso
private:
    unsigned int hour{0}, minute{0}, second{0};
};

#endif