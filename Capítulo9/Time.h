#ifndef TIME_H
#define TIME_H

// Declaração da classe Time.
// Funções serão definidas em Time.cpp
class Time
{
public:
    Time();
    void setTime(int, int, int);
    std::string printUniversal() const;
    std::string printStandard() const;
private:
    unsigned int hour, minute, second;

};

#endif